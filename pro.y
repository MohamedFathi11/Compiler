%{
    #include<stdio.h>
    #include<string.h>
    int check[26];
    int ivars[26];
    float fvars[26];
    char cvars[26];
    char svars[26][1000];
    int bvars[26];
    double funs[26];
    char cfuns[26];
    char sfuns[26][1000];
    int pot;
    double arr[1000];
    int par [26];
    int c=0;
%}
// 0 empty - 1 int - 2 float - 3 char - 4 string - 5 bool - 6 fun 

%union{
    int i;
    float f;
    char c;
    char s [1000];
    int b;
}

%token <i> NUMI
%token <f> NUMF
%token <i> ID
%token <b> BOOLB
%token <c> CHARC
%token <s> STRINGS



%token POWER
%token PRINT
%token NL
%token INT
%token FLOAT
%token CHAR
%token STRING
%token BOOL
%token EQ
%token GE
%token LE
%token IF
%token ELSE
%token FOR
%token INC
%token DEC
%token WHILE
%token DO
%token VOID
%token RETURN
%token SWITCH
%token CASE
%token DEFAULT
%token NE
%token PRO
%token MUL
%token REM

%left '>' '<' EQ GE LE 
%left '-' '+'
%left '*' '/' '%'
%left POWER

%type <f> exp
%type <i> var
%type <i> type
%type <f> case
%type <f> default
%type <i> para
%type <i> para2

%start prog

%%
prog:
    stat ';' NL prog
    |
    if   prog
    |
    for  prog
    |
    while prog
    |
    do prog
    |
    fun prog
    |
    call prog
    |
    switch prog
    |
    ;
switch:
        SWITCH '(' ID ')' NL case  
        {
            if(check[$3]==0||check[$3]==6||check[$3]==7||check[$3]==8){
                yyerror("Var Not Defined");
            }
            else{
                if(check[$3]==1||check[$3]==2||check[$3]==5){
                int e=0;
                for(int i=pot-1;i>=0;i--){
                    if(ivars[$3]==arr[i]){
                        e=1;
                        printf("Case %d execute\n",pot-i);
                    }
                }
                if(!e)
                    printf("Default execute\n");
                }
            }
        }
        |          
;
default:
        DEFAULT ':' exp ';'NL
        {
            pot=0;
        }
;
case:
    CASE exp ':' exp ';' NL case  
    {
        arr[pot++]=$2;
    }          
    |
    default                    
    |
;
fun:
    type ID '(' para ')' stat ';' RETURN exp ';' NL 
    {
        if(check[$2]!=0)
            yyerror("Error Declared before");
        else{
            if($1!=1&&$1!=2&&$1!=5)
                yyerror("Error Invalid Opreation");
            else{
                check[$2]=6;
                par[$2]=$4;
                funs[$2]=$9;
            }
        }
    }
    |
    type ID '(' para ')' stat ';' RETURN BOOLB ';' NL 
    {
        if(check[$2]!=0)
            yyerror("Error Declared before");
        else{
            if($1!=5)
                yyerror("Error Invalid Opreation");
            else{
                check[$2]=6;
                funs[$2]=$9;
            }
        }
    }
    |
    type ID '(' para ')' stat ';' RETURN CHARC ';' NL 
    {
        if(check[$2]!=0)
            yyerror("Error Declared before");
        else{
            if($1!=3)
                yyerror("Error Invalid Opreation");
            else{
                check[$2]=7;
                cfuns[$2]=$9;
            }
        }
    }
    |
    type ID '(' para ')' stat ';' RETURN STRINGS ';' NL 
    {
        if(check[$2]!=0)
            yyerror("Error Declared before");
        else{
            if($1!=4)
                yyerror("Error Invalid Opreation");
            else{
                check[$2]=8;
                strcpy(sfuns[$2],$9);
            }
        }
    }
    |
    type ID '(' para ')' stat ';' NL 
    {
        if(check[$2]!=0)
            yyerror("Error Declared before");
        else{
            if($1!=6)
                yyerror("Error Invalid Opreation");
            else{
                check[$2]=6;
                funs[$2]=-1;
            }
        }
    }
    |
;
para:
    var ',' para    {$$=$1+1;}
    |
    var     {$$=1;}
    |
;
call:
    ID '(' para2 ')' ';' NL{
        if(check[$1]!=6&&check[$1]!=7&&check[$1]!=8)
            yyerror("Error Not Declared before");
        else if($3!=par[$1])
            yyerror("Error Not Same parameters");
        else
            {
                if(check[$1]==6)
                    printf("= %f\n",funs[$1]);
                else if (check[$1]==7)
                    printf("= %c\n",cfuns[$1]);
                else
                    printf("= %s\n",sfuns[$1]);
            }
    }
;
para2:
    var2 ',' para2  {$$=$3+1;}
    |
    var2    {$$=1;}
    |
;
var2:
    type ID            
    |
    type ID '=' exp     
    |
    type ID '=' BOOLB     
    |
    type ID '=' CHARC     
    |
    type ID '=' STRINGS
    |     
;
do:
    DO '{' ID INC exp ';' exp ';' '}' WHILE '(' ID '<' exp ')' ';' NL
    {
        if(check[$12]!=1&&check[$12]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$5,c=0,en=$14;
                check[$12]=1;
                do{
                    ivars[$12]+=step;
                    printf("%d execution: %f\n",++c,$7);
                }while(ivars[$12]<en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    DO '{' ID INC exp ';' exp ';' '}' WHILE '(' ID '>' exp ')' ';' NL
    {
        if(check[$12]!=1&&check[$12]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$5,c=0,en=$14;
                check[$12]=1;
                do{
                    ivars[$12]+=step;
                    printf("%d execution: %f\n",++c,$7);
                }while(ivars[$12]>en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    DO '{' ID INC exp ';' exp ';' '}' WHILE '(' ID GE exp ')' ';' NL
    {
        if(check[$12]!=1&&check[$12]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$5,c=0,en=$14;
                check[$12]=1;
                do{
                    ivars[$12]+=step;
                    printf("%d execution: %f\n",++c,$7);
                }while(ivars[$12]>=en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    DO '{' ID INC exp ';' exp ';' '}' WHILE '(' ID LE exp ')' ';' NL
    {
        if(check[$12]!=1&&check[$12]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$5,c=0,en=$14;
                check[$12]=1;
                do{
                    ivars[$12]+=step;
                    printf("%d execution: %f\n",++c,$7);
                }while(ivars[$12]<=en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    DO '{' ID INC exp ';' exp ';' '}' WHILE '(' ID EQ exp ')' ';' NL
    {
        if(check[$12]!=1&&check[$12]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$5,c=0,en=$14;
                check[$12]=1;
                do{
                    ivars[$12]+=step;
                    printf("%d execution: %f\n",++c,$7);
                }while(ivars[$12]==en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    DO '{' ID INC exp ';' exp ';' '}' WHILE '(' ID NE exp ')' ';' NL
    {
        if(check[$12]!=1&&check[$12]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$5,c=0,en=$14;
                check[$12]=1;
                do{
                    ivars[$12]+=step;
                    printf("%d execution: %f\n",++c,$7);
                }while(ivars[$12]!=en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
;
while:
    WHILE '(' ID '<' exp ')' ID INC exp ';' exp ';' NL   
    {
        if(check[$3]!=1&&check[$3]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$9,c=0,en=$5;
                check[$3]=1;
                while(ivars[$3]<en&&c<1000){
                    ivars[$3]+=step;
                    printf("%d execution: %f\n",++c,$11);
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    WHILE '(' ID '>' exp ')' ID INC exp ';' exp ';' NL   
    {
        if(check[$3]!=1&&check[$3]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$9,c=0,en=$5;
                check[$3]=1;
                while(ivars[$3]>en&&c<1000){
                    ivars[$3]+=step;
                    printf("%d execution: %f\n",++c,$11);
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    WHILE '(' ID LE exp ')' ID INC exp ';' exp ';' NL   
    {
        if(check[$3]!=1&&check[$3]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$9,c=0,en=$5;
                check[$3]=1;
                while(ivars[$3]<=en&&c<1000){
                    ivars[$3]+=step;
                    printf("%d execution: %f\n",++c,$11);
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    WHILE '(' ID GE exp ')' ID INC exp ';' exp ';' NL   
    {
        if(check[$3]!=1&&check[$3]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$9,c=0,en=$5;
                check[$3]=1;
                while(ivars[$3]>=en&&c<1000){
                    ivars[$3]+=step;
                    printf("%d execution: %f\n",++c,$11);
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    WHILE '(' ID EQ exp ')' ID INC exp ';' exp ';' NL   
    {
        if(check[$3]!=1&&check[$3]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$9,c=0,en=$5;
                check[$3]=1;
                while(ivars[$3]==en&&c<1000){
                    ivars[$3]+=step;
                    printf("%d execution: %f\n",++c,$11);
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
    WHILE '(' ID NE exp ')' ID INC exp ';' exp ';' NL   
    {
        if(check[$3]!=1&&check[$3]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=$9,c=0,en=$5;
                check[$3]=1;
                while(ivars[$3]!=en&&c<1000){
                    ivars[$3]+=step;
                    printf("%d execution: %f\n",++c,$11);
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
    |
;
for:
    FOR '(' ID ';' exp ';' exp ';' exp ')'  stat ';' NL
                                            {
                                                if(check[$3]!=1&&check[$3]!=0)
                                                    yyerror("Error Invalid Opreation");
                                                else{
                                                    int st=$5,en=$7,step=$9;
                                                    if((en-st)%step!=0)
                                                        yyerror("Error Infinty Loop");
                                                    else{
                                                        check[$3]=1;
                                                        int c=0;
                                                        for(ivars[$3]=st;ivars[$3]!=en;ivars[$3]+=step,c++)
                                                            
                                                        printf("Loop executed %d times\n",c);
                                                    }
                                                }
                                            } 
;
if:
    
    IF '(' exp ')' exp ';' NL   {
                                    if($3){
                                        printf("= %f\n",$5);
                                    }
                                } 
    |
    IF '(' exp ')' exp ';' ELSE exp ';' NL  {
                                                if($3)
                                                    printf("= %f\n",$5);
                                                else
                                                    printf("= %f\n",$8);
                                            }
;
stat:
    exp 
    |
    var            
    |
    print 
    |
    assi  
    |
    ;
assi:
    ID '=' exp           {  
                            if(check[$1]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[$1]==1)
                                ivars[$1]=$3;
                            else if (check[$1]==2)
                                fvars[$1]=$3;
                            else if (check[$1]==5)
                                bvars[$1]=$3;
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
    |
    ID INC exp           {  
                            if(check[$1]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[$1]==1)
                                ivars[$1]+=$3;
                            else if (check[$1]==2)
                                fvars[$1]+=$3;
                            else if (check[$1]==5)
                                bvars[$1]+=$3;
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
    |
    ID DEC exp           {  
                            if(check[$1]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[$1]==1)
                                ivars[$1]-=$3;
                            else if (check[$1]==2)
                                fvars[$1]-=$3;
                            else if (check[$1]==5)
                                bvars[$1]-=$3;
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
    |
    ID PRO exp           {  
                            if(check[$1]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[$1]==1)
                                ivars[$1]*=$3;
                            else if (check[$1]==2)
                                fvars[$1]*=$3;
                            else if (check[$1]==5)
                                bvars[$1]*=$3;
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
    |
    ID '=' BOOLB     {
                            if(check[$1]==0)
                                yyerror("Var Not Declared\n");
                            else if (check[$1]==5)
                                bvars[$1]=$3;
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
    |
    ID '=' CHARC        {
                            if(check[$1]==0)
                                yyerror("Var Not Declared\n");
                            else if (check[$1]==3)
                                cvars[$1]=$3;
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
    |
    ID '=' STRINGS     {
                                if(check[$1]==0)
                                    yyerror("Var Not Declared\n");
                                else if (check[$1]==4)
                                    {
                                        char temp[1000];
                                        strcpy(temp,$3);
                                        int i;
                                        for(i=1;i<strlen(temp)-1;i++){
                                            svars[$1][i-1]=temp[i];
                                        }
                                        svars[$1][i-1]='\0';                                        
                                    }
                                else
                                    yyerror("Error Invalid Opreation\n");
                        }
;
print:
    PRINT '(' ID ')'    {
                            if(check[$3]==0)
                                yyerror("Error Not Declared Before\n");
                            else if(check[$3]==1)
                                printf("= %d\n",ivars[$3]);
                            else if(check[$3]==2)
                                printf("= %f\n",fvars[$3]);
                            else if(check[$3]==3)
                                printf("= %c\n",cvars[$3]);
                            else if(check[$3]==4)
                                { 
                                    printf("= %s\n",svars[$3]);
                                }
                            else if (check[$3]==5)
                                {
                                    if(bvars[$3])
                                        printf("= true\n");
                                    else
                                        printf("= false\n");
                                }
                        }
    |
    PRINT '(' NUMI ')'  {printf("= %d\n",$3);}
    |
    PRINT '(' NUMF ')'  {printf("= %f\n",$3);}
    |
    PRINT '(' BOOLB ')'  {printf("= %d\n",$3);}
    |
    PRINT '(' CHARC ')'  {printf("= %c\n",$3);}
    |
    PRINT '(' STRINGS ')'   {
                                char temp[1000];
                                int i;
                                for(i=1;i<strlen($3)-1;i++)
                                    temp[i-1]=$3[i];
                                temp[i-1]='\0';
                                printf("= %s\n",temp);
                            }
    |
    PRINT '(' exp ')'   {printf("= %f\n",$3);}
    |
;
var:
    type ID             {
                            if(check[$2]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[$2]=$1;
                            $$=$2;
                            }
                        }
    |
    type ID '=' exp     {
                            if(check[$2]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[$2]=$1;
                            if($1==1)
                                ivars[$2]=$4;
                            else if($1==2)
                                fvars[$2]=$4;          
                            else
                                bvars[$2]=$4;
                            $$=$2;
                            }
                        }
    |
    type ID '=' BOOLB     {
                            if(check[$2]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[$2]=5;
                            bvars[$2]=$4;
                            $$=$2;
                            }
                        }
    |
    type ID '=' CHARC     {
                            if(check[$2]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[$2]=3;
                            cvars[$2]=$4;
                            $$=$2;
                            }
                        }
    |
    type ID '=' STRINGS     {
                            if(check[$2]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[$2]=4;
                            char temp[1000];
                            strcpy(temp,$4);
                            int i;
                            for(i=1;i<strlen(temp)-1;i++){
                                svars[$2][i-1]=temp[i];
                            }
                            svars[$2][i-1]='\0';
                            $$=$2;
                            }
                        }
;
type:
    INT                 {$$=1;}
    |
    FLOAT               {$$=2;}
    |
    CHAR                {$$=3;}
    |
    STRING              {$$=4;}
    |
    BOOL                {$$=5;}
    |
    VOID                {$$=6;}
    |
;
exp:
    exp '-' exp       {$$=$1-$3;}
    |
    exp '+' exp       {$$=$1+$3;}
    |
    exp '*' exp       {$$=$1*$3;}
    |
    exp '/' exp       {
                        if($3==0)
                            yyerror("Error Divison by zero");
                        else
                            {$$=$1/$3;}
                        }
    |
    exp '%' exp      {
                        if($3==0)
                            yyerror("Error Reminder by zero");
                        else
                            {
                                int x=$1,y=$3;
                                $$=x%y;
                            }
                        }
    |
    exp POWER exp    {
                        int y=$3;
                        $$=1;
                        for(int i=0;i<y;i++)
                            $$*=$1;
                        }
    |
    exp '>' exp         {
                            $$=$1>$3;
                        }
    |
    exp '<' exp         {
                            $$=$1<$3;
                        }
    |
    exp EQ exp         {
                            $$=($1==$3);
                        }
    |
    exp GE exp         {
                            $$=$1>=$3;
                        }
    |
    exp LE exp         {
                            $$=$1<=$3;
                        }
    |
    exp NE exp         {
                            $$=$1!=$3;
                        }
    |
    NUMI                {$$=$1;}
    |
    '-' NUMI                {$$=-$2;}   
    |
    NUMF                {$$=$1;}
    |
    '-' NUMF                {$$=-$2;}
    |
    ID                  {
                            if(check[$1]==0)
                                yyerror("Var Not Defined");
                            else if(check[$1]==1){
                                $$=ivars[$1];
                            }
                            else if (check[$1]==2){
                                $$=fvars[$1];
                            }
                            else
                                yyerror("Error Invalid Opreation");
                        }
    |
    '-' ID                  {
                            if(check[$2]==0)
                                yyerror("Var Not Defined");
                            else if(check[$2]==1){
                                $$=-ivars[$2];
                            }
                            else if (check[$2]==2){
                                $$=-fvars[$2];
                            }
                            else
                                yyerror("Error Invalid Opreation");
                        }
    |
    ;
%%
int yyerror(char *s){
    printf("%s\n",s);
    return 0;
}
int main (){
    while(3)
        yyparse();
    return 0;
}
