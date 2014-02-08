%{
#include "brew_parser.h"
#include "brew_scanner.h"

int lineno = 1;
void	comment();
void	count();
%}

%%

"-"		{ return MINUS; }
"--"		{ return MINUSMINUS; }
"!"		{ return EXCLAM; }
"!="	{ return EXCLAMEQ; }
"!=="		{ return EXCLAMEQEQ; }
"%"		{ return PERCENT; }
"%="		{ return PERCENTEQ; }
"&"		{ return AMP; }
"&&"		{ return AMPAMP; }
"&="		{ return AMPEQ; }
"("		{ return LPAREN; }
")"		{ return RPAREN; }
"*"		{ return TIMES; }
"*="		{ return TIMESEQ; }
","		{ return COMMA; }
"."		{ return DOT; }
"/"		{ return DIV; }
"/="		{ return DIVEQ; }
":"		{ return COLON; }
";"		{ return SEMI; }
"?"		{ return QUESTION; }
"["		{ return LBRACKET; }
"]"		{ return RBRACKET; }
"^"		{ return CARET; }
"^="		{ return CARETEQ; }
"{"		{ return LBRACE; }
"|"		{ return PIPE; }
"||"		{ return PIPEPIPE; }
"|="		{ return PIPEEQ; }
"}"		{ return RBRACE; }
"~"		{ return TILDE; }
"+"		{ return PLUS; }
"++"		{ return PLUSPLUS; }
"+="		{ return PLUSEQ; }
"<"		{ return LT; }
"<<"		{ return LTLT; }
"<<="		{ return LTLTEQ; }
"<="		{ return LTEQ; }
"="		{ return EQ; }
"-="		{ return MINUSEQ; }
"=="		{ return EQEQ; }
"==="		{ return EQEQEQ; }
">"		{ return GT; }
">="		{ return GTEQ; }
">>"		{ return GTGT; }
">>="		{ return GTGTEQ; }
">>>"		{ return GTGTGT; }
">>>="		{ return GTGTGTEQ; }
BREAK		{ return BREAK; }
CASE		{ return CASE; }
CATCH		{ return CATCH; }
CONTINUE		{ return CONTINUE; }
DEFAULT		{ return DEFAULT; }
DELETE		{ return DELETE; }
DO		{ return DO; }
ELSE		{ return ELSE; }
FALSE		{ return FALSE; }
FINALLY		{ return FINALLY; }
FOR		{ return FOR; }
FUNCTION		{ return FUNCTION; }
IF		{ return IF; }
IMPORT		{ return IMPORT; }
IN		{ return IN; }
INSTANCEOF		{ return INSTANCEOF; }
NEW		{ return NEW; }
NULL		{ return NULL; }
PACKAGE		{ return PACKAGE; }
PROTOTYPE	{ return PROTOTYPE; }
PROVIDES	{ return PROVIDES; }
RETURN		{ return RETURN; }
REQUIRES	{ return REQUIRES; }
SWITCH		{ return SWITCH; }
THIS		{ return THIS; }
THROW		{ return THROW; }
TRUE		{ return TRUE; }
TRY			{ return TRY; }
TYPEOF		{ return TYPEOF; }
VAR			{ return VAR; }
VOID		{ return VOID; }
WHILE		{ return WHILE; }
WITH		{ return WITH; }

[A-Za-z_][A-Za-z0-9_]*	{ return IDENTIFIER; }
0[xX][0-9A-Fa-f]+		{ return HEXINTEGERLITERAL; }
0[bB][0-1]+				{ return BININTEGERLITERAL; }
[0-9]+ | [0-9]+ "." [0-9]* | "." [0-9]*	{ return DECIMALLITERAL; }
[A-Za-z_]?\"(\\.|[^\\"])*\"	{ return STRINGLITERAL; }

"/(.*)*/"		{ return REGEXP; }

\n		lineno++;
[ \t\r]+	{count();}
"//".*	{;}
"/*"	{comment();}

.	{ }

%%

yywrap() { return 1; }

void comment()
{
	char c, c1;
loop:
	while((c = input()) != '*' && c != 0)
		putchar(c);
	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}
	if (c != 0)
		putchar(c1);
}

int col = 0;
void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			col = 0;
		else if (yytext[i] == '\t')
			col += TABW - (col % TABW);
		else
			col++;

	ECHO;
}
