%option noyywrap
%option noinput nounput
%{
    #include<stdio.h>
    #include<string.h>
    #include "y.tab.h"
%}

digit [0-9]
char [a-z]

%%
switch                  return SWITCH;
case                    return CASE;
default                 return DEFAULT;
return                  return RETURN;
void                    return VOID;
do                      return DO;
while                   return WHILE;
for                     return FOR;
if                      return IF;
else                    return ELSE;
print                   return PRINT;
int                     return INT;
float                   return FLOAT;
char                    return CHAR;
bool                    return BOOL;
string                  return STRING;
true                    {yylval.b=1; return BOOLB;}
false                   {yylval.b=0; return BOOLB;}
\'.\'                   {yylval.c=(yytext[1]); return CHARC;}
\".*\"                  {strcpy(yylval.s,yytext); return STRINGS;}
{digit}+                {yylval.i=atoi(yytext); return NUMI;}
{digit}+\.{digit}+     {yylval.f=atof(yytext); return NUMF;}
{char}                  {yylval.i=yytext[0]-'a'; return ID;}   
[-+*/%;=()><{},:]                return yytext[0];
"**"                    return POWER;
">="                    return GE;
"<="                    return LE;
"=="                    return EQ;
"!="                    return NE;
"+="                    return INC;
"-="                    return DEC;
"*="                    return PRO;
"/="                    return MUL;
"%="                    return REM;
[ \t]                   ;
\n                      return NL;
.                       ECHO;
%%