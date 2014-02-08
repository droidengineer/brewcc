/* brew.y tiny JS parser
 * $Id$
 */

%token MINUS MINUSMINUS EXCLAM EXCLAMEQ EXCLAMEQEQ PERCENT PERCENTEQ
%token AMP AMPAMP AMPEQ LPAREN RPAREN TIMES TIMESEQ COMMA DOT
%token DIV DIVEQ COLON SEMI QUESTION LBRACKET RBRACKET CARET
%token CARETEQ LBRACE PIPE PIPEPIPE PIPEEQ RBRACE TILDE PLUS
%token PLUSPLUS PLUSEQ LT LTLT LTLTEQ LTEQ EQ MINUSEQ EQEQ 
%token EQEQEQ GT GTEQ GTGT GTGTEQ GTGTGT GTGTGTEQ BREAK CASE
%token CATCH CONTINUE DECIMALLITERAL DEFAULT DELETE DO ELSE
%token FALSE FINALLY FOR FUNCTION HEXINTEGERLITERAL IDENTIFIER
%token IF IN INSTANCEOF NEW NULL REGEXP RETURN STRINGLITERAL
%token SWITCH THIS THROW TRUE TRY TYPEOF VAR VOID WHILE WITH

%start program

%%

program : source_elements
	;

source_elements : source_element
	| source_elements source_element
	;

source_element : statement
	| function_decl
	;

statement : block
	| var_statement
	| empty_statement
	| if_statement
	| if_else_statement
	| iteration_statement
	| continue_statement
	| break_statement
	| return_statement
	| with_statement
	| label_statement
	| switch_statement
	| throw_statement
	| try_statement
	| expression
	;

block : LBRACE RBRACE
	| LBRACE statement_list RBRACE
	;

statement_list : statement
	| statement_list statement
	;

var_statement : VAR var_decl_list SEMI
	;

var_decl_list : var_decl
	| var_decl_list COMMA var_decl
	;

var_decl : IDENTIFIER
	| IDENTIFIER initializer
	;

initializer : EQ assignment_expression
	;

empty_statement : SEMI
	;

if_statement : IF LPAREN expression RPAREN statement
	;

if_else_statement : IF LPAREN expression RPAREN statement ELSE statement
	;

continue_statement : CONTINUE SEMI
	| CONTINUE IDENTIFIER SEMI
	;

break_statement : BREAK SEMI
	| BREAK IDENTIFIER SEMI
	;

return_statement : RETURN SEMI
	| RETURN expression SEMI
	;

with_statement : WITH LPAREN expression RPAREN statement SEMI
	;

switch_statement : SWITCH LPAREN expression RPAREN case_block
	;
	
case_block : LBRACE RBRACE
	| LBRACE case_clauses RBRACE
	| LBRACE case_clauses default_clause RBRACE
	| LBRACE case_clauses default_clause case_clauses RBRACE
	| LBRACE default_clause case_clauses RBRACE
	| LBRACE default_clause RBRACE
	;

case_clauses : case_clause
	| case_clauses case_clause
	;

case_clause : CASE expression COLON statement_list
	| CASE expression COLON
	;

default_clause : DEFAULT COLON
	| DEFAULT COLON statement_list
	;

label_statement : IDENTIFIER COLON statement
	;

throw_statement : THROW expression
	;

try_statement : TRY block catch
	| TRY block finally
	| TRY block catch finally
	;

catch : CATCH LPAREN IDENTIFIER RPAREN block
	;

finally : FINALLY block
	;

iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI
	| WHILE LPAREN expression RPAREN statement
	| FOR LPAREN expression SEMI expression SEMI expression RPAREN statement
	| FOR LPAREN VAR var_decl_list SEMI expression SEMI expression RPAREN statement
	| FOR LPAREN lhs_expression IN expression RPAREN statement
	| FOR LPAREN VAR var_decl IN expression RPAREN statement
	;

expression : assignment_expression
	| expression COMMA assignment_expression
	;

assignment_expression : conditional_expression
	| lhs_expression assignment_operator assignment_expression
	;

conditional_expression : logical_or_expression
	| logical_or_expression QUESTION assignment_expression COLON assignment_expression
	;

lhs_expression : new_expression
	| call_expression
	;

assignment_operator : EQ
	| TIMESEQ
	| DIVEQ
	| PERCENTEQ
	| PLUSEQ
	| MINUSEQ
	| LTLTEQ
	| GTGTEQ
	| GTGTGTEQ
	| AMPEQ
	| CARETEQ
	| PIPEEQ
	;

literal : null_literal
	| bool_literal
	| numeric_literal
	| STRINGLITERAL
	;

null_literal : NULL
	;

bool_literal : TRUE
	| FALSE
	;

numeric_literal : DECIMALLITERAL
	| HEXINTEGERLITERAL
	;

regular_expression_literal : REGEXP
	;

array_literal : LBRACKET RBRACKET
	| LBRACKET elision RBRACKET
	| LBRACKET element_list RBRACKET
	| LBRACKET element_list COMMA elision RBRACKET
	;

elision : COMMA
	| elision COMMA
	;

element_list : elision assignment_expression
	| element_list COMMA elision assignment_expression
	| element_list COMMA assignment_expression
	| assignment_expression
	;

object_literal : LBRACE property_name_val_list RBRACE
	;

property_name_val_list : property_name COLON assignment_expression
	| property_name_val_list COMMA property_name COLON assignment_expression
	;

property_name : IDENTIFIER
	| STRINGLITERAL
	| numeric_literal
	;

primary_expression : THIS
	| IDENTIFIER
	| literal
	| array_literal
	| object_literal
	| LPAREN expression RPAREN
	| regular_expression_literal
	;

new_expression : member_expression
	| NEW new_expression
	;

member_expression : primary_expression
	| function_expression
	| member_expression LBRACKET expression RBRACKET
	| member_expression DOT IDENTIFIER
	| NEW member_expression arguments
	;

call_expression : member_expression arguments
	| call_expression arguments
	| call_expression LBRACKET expression RBRACKET
	| call_expression DOT IDENTIFIER
	;

arguments : LPAREN RPAREN
	| LPAREN argument_list RPAREN
	;

argument_list : assignment_expression
	| argument_list COMMA assignment_expression
	;

logical_or_expression : logical_and_expression
	| logical_or_expression PIPEPIPE logical_and_expression
	;

logical_and_expression : bitwise_or_expression
	| logical_and_expression AMPAMP bitwise_or_expression
	;

bitwise_or_expression : bitwise_xor_expression
	| bitwise_or_expression PIPE bitwise_xor_expression
	;

bitwise_xor_expression : bitwise_and_expression
	| bitwise_xor_expression CARET bitwise_and_expression
	;

bitwise_and_expression : equality_expression
	| bitwise_and_expression AMP equality_expression
	;

equality_expression : relational_expression
	| equality_expression EQEQ relational_expression
	| equality_expression EXCLAMEQ relational_expression
	| equality_expression EQEQEQ relational_expression
	| equality_expression EXCLAMEQEQ relational_expression
	;

relational_expression : shift_expression
	| relational_expression LT shift_expression
	| relational_expression GT shift_expression
	| relational_expression LTEQ shift_expression
	| relational_expression GTEQ shift_expression
	| relational_expression INSTANCEOF shift_expression
	;

shift_expression : shift_expression LTLT additive_expression
	| shift_expression GTGT additive_expression
	| shift_expression GTGTGT additive_expression
	| additive_expression
	;

additive_expression : additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression
	| multiplicative_expression
	;

multiplicative_expression : unary_expression
	| unary_expression TIMES multiplicative_expression
	| unary_expression DIV multiplicative_expression
	| unary_expression PERCENT multiplicative_expression
	;

unary_expression : postfix_expression
	| DELETE unary_expression
	| VOID unary_expression
	| TYPEOF unary_expression
	| PLUSPLUS unary_expression
	| MINUSMINUS unary_expression
	| PLUS unary_expression
	| MINUS unary_expression
	| TILDE unary_expression
	| EXCLAM unary_expression
	;

postfix_expression : lhs_expression
	| postfix_expression PLUSPLUS
	| postfix_expression MINUSMINUS
	;

function_decl : FUNCTION IDENTIFIER LPAREN formal_param_list RPAREN LBRACE function_body RBRACE
	| FUNCTION IDENTIFIER LPAREN RPAREN LBRACE function_body RBRACE
	;

function_expression : FUNCTION LPAREN RPAREN LBRACE function_body RBRACE
	| FUNCTION LPAREN formal_param_list RPAREN LBRACE function_body RBRACE
	;

formal_param_list : IDENTIFIER
	| formal_param_list COMMA IDENTIFIER
	;

function_body : source_elements
	|
	;