# brew_toolchain/bcc makefile
#
#

TARGET=bcc
OPT=0
DEBUG= dwarf-2
LIBS=

OBJDIR=obj
LIBDIR=
INCDIR=

CC=gcc
CXX=g++
FLEX=\bin\win_flex
BISON=\bin\win_bison
FLEXARGS=
BISONARGS= -k

CPPSRC= main.cpp
GENSRC= brew.lex.cpp brew-1.3.tab.c
ASMSRC=

LEXSRC=brew.l
PARSESRC=brew.y

CPPSTD=-std=cx++11

CFLAGS = -g$(DEBUG) -O$(OPT)
CFLAGS += -DBUILD_DATE=$(BUILD_DATE) -DBUILD_NUM=$(BUILD_NUM)
CFLAGS += -Wall
CFLAGS += -Wa,-adhlns=$(OBJDIR)/$(notdir $(<:%.c=%.lst))

LDFLAGS = -Wl,-Map=$(TARGET).map,--cref
LDFLAGS += $(patsubst %,-L%,$(LIBDIR))
LDFLAGS += $(LIBS)

OBJ = $(CPPSRC:%.cpp=$(OBJDIR)/%.o) $(GENSRC:%.cpp=%(OBJDIR)/%.o)
LST = $(CPPSRC:%.cpp=$(OBJDIR)/%.lst) $(GENSRC:%.cpp=%(OBJDIR)/%.lst)

GENDEPFLAGS = -MMD -MP -MF .dep/$(@F).d

ALLCFLAGS = $(INCDIR) -x c++ $(CFLAGS) $(CPPSTD) $(GENDEPFLAGS)

MSG_BEGIN= .....oO[ BEGINNING ]Oo.....
MSG_END= .....oO[ ENDING ]Oo.....
MSG_BUILDING= .....oO[ BUILDING ]Oo.....
MSG_PARSER= |-----.....oO[ PARSER ]Oo.....
MSG_SCANNER= |-----.....oO[ SCANNER ]Oo.....
MSG_COMPILING= |-----.....oO[ COMPILING ]Oo.....
MSG_LINKING= |-----.....oO[ LINKING ]Oo.....


all: begin genscanner genparser build end

begin:
	@echo
	@echo $(MSG_BEGIN)
	gccversion

gccversion:
	@$(CXX) --version
	
end:
	@echo
	@echo $(MSG_END)

genscanner:
	@echo
	@echo $(MSG_SCANNER)
	$(FLEX) $(FLEXARGS) $(LEXSRC)
	
genparser:
	@echo
	@echo $(MSG_PARSER)
	$(BISON) $(BISONARGS) $(PARSESRC)
	
	
	
build: $(TARGET)

$(TARGET) : $(OBJS)
	@echo
	@echo $(MSG_LINKING) $@
	$(CXX) -o $@ $(OBJS) $(LIBS)

$(OBJDIR)/%.o : %.cpp
	@echo
	@echo $(MSG_COMPILING) $<
	$(CXX) -c $(CFLAGS) $< -o $@
	
	
clean: begin clean_list end

clean_list:
	@echo
	@echo
	$(RM) $(TARGET)
	$(RM) $(OBJDIR)/%.o
	
$(shell mkdir $(OBJDIR) 2>/dev/null)

-include $(shell  mkdir .dep 2>/dev/null) $(wildcard .dep/*)

.PHONY: all begin end genparser genscanner build gccversion clean clean_list
