%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define N 50

    
    extern FILE *yyin;
    extern int yylex();
    extern char* yytext;
    extern int yyparse();
    extern int yylineno;
    void yyerror(const char* s);
    
    int toInteger(const char *s);
    void checkLayoutValue(char *value);
    void checkUniqueID(char *idstr);
    void checkPaddingValue(char *padstr);
    void checkProgressValue(int prog, int maxvalue);
    void checkedButton(char *checkButtonValue);
    void insertRbuttonValues(char *idRbutton);
    void checkCounter(int counterValue, int counter);
    void initialArray();
    char layoutcont[2][15]={"\"wrap_content\"", "\"match_parent\""};
    
    char idValues[N][15];
    char radioButtonValues[N][15];

    char checkButtonValue[15]={'\0'};
    int maxProgress;
    int progressValue;
    int rbuttonCnt;
    int existCheckButton = 0;
    int existMax = 0;
    int existProgress = 0;
    int counterValue;

%}

%token LINEARBEGIN LINEAREND
%token RELATIVEBEGIN RELATIVEEND
%token RADIONGROUPBEGIN RADIOGROUPEND
%token TEXTVIEWBEGIN
%token IMAGEVIEWBEGIN
%token BUTTONBEGIN
%token RADIOBUTTONBEGIN
%token PROGRESSBARBEGIN
%token WIDTH HEIGHT
%token ID ORIENTATION TEXT TEXTCOLOR SRC PADDING CHECKEDBUTTON MAX PROGRESS COUNTER
%token TAGEND EMPTYELEMENTEND
%token COMMENTS
%token STRING
%token POSITIVEINTEGER
%token EOL 

%start root
%%
//Root
root
: LINEARBEGIN {printf("%s", yytext);} lin_layout 
| RELATIVEBEGIN {printf("%s", yytext);} rel_layout 
;

//--Attributes Content
general_attr
: WIDTH {printf("%s", yytext);} attr_cont {checkLayoutValue(yytext);} nline HEIGHT {printf("%s", yytext);} attr_cont {checkLayoutValue(yytext);}
| HEIGHT {printf("%s", yytext);} attr_cont {checkLayoutValue(yytext);} nline WIDTH {printf("%s", yytext);} attr_cont {checkLayoutValue(yytext);}
;

attr_cont
: str_cont_nocoms
| int_cont_nocoms
;

str_cont_nocoms
: STRING {printf("%s", yytext);}
;

int_cont_nocoms
: POSITIVEINTEGER {printf("%s", yytext);}
;

//--Elements
elements
: root
| TEXTVIEWBEGIN {printf("%s", yytext);} textview
| IMAGEVIEWBEGIN {printf("%s", yytext);} imageview
| BUTTONBEGIN {printf("%s", yytext);} button
| RADIONGROUPBEGIN {rbuttonCnt=0; initialArray(); printf("%s", yytext);} radiogroup
| PROGRESSBARBEGIN {printf("%s", yytext);} progressbar
;

more_elem
: line_comments elements more_elem
| line_comments
;

//--LinearLayout
lin_layout
: nline general_attr opt_lin_attr line_comments elements more_elem LINEAREND {printf("%s", yytext);} 
;


opt_lin_attr
: ID {printf("%s", yytext);} str_cont_nocoms opt_lin_attr
| ORIENTATION {printf("%s", yytext);} str_cont_nocoms opt_lin_attr
| TAGEND {printf("%s", yytext);} 
| nline opt_lin_attr
; 

//--Relative Layout
rel_layout
:  nline general_attr opt_rev_attr
;

opt_rev_attr
: relative
| nline ID {printf("%s", yytext);} str_cont_nocoms relative
;

relative
: TAGEND {printf("%s", yytext);} line_comments elements more_elem RELATIVEEND {printf("%s", yytext);}
| EMPTYELEMENTEND {printf("%s", yytext);} 
;

//--Text View
textview
: nline general_attr text_attr  
;

text_attr
: TEXT {printf("%s", yytext);} str_cont_nocoms EMPTYELEMENTEND {printf("%s", yytext);}
| opt_text_attr 
;

opt_text_attr
: nline ID {printf("%s", yytext);} str_cont_nocoms {checkUniqueID(yytext);} opt_text_attr
| nline TEXTCOLOR {printf("%s", yytext);} str_cont_nocoms opt_text_attr
| nline text_attr
;

//--Image View
imageview
: nline general_attr img_attr 
;

img_attr
: SRC {printf("%s", yytext);} str_cont_nocoms EMPTYELEMENTEND {printf("%s", yytext);} 
| opt_img_attr
; 

opt_img_attr
: ID {printf("%s", yytext);} str_cont_nocoms {checkUniqueID(yytext);} opt_img_attr
| PADDING {printf("%s", yytext);} int_cont_nocoms {checkPaddingValue(yytext);} opt_img_attr
| nline img_attr
;


//--Button
button
: nline general_attr but_attr 
;

but_attr
: TEXT {printf("%s", yytext);} str_cont_nocoms EMPTYELEMENTEND {printf("%s", yytext);} 
| opt_but_attr
;

opt_but_attr 
: ID {printf("%s", yytext);} str_cont_nocoms {checkUniqueID(yytext);} opt_but_attr
| PADDING {printf("%s", yytext);} int_cont_nocoms {checkPaddingValue(yytext);} opt_but_attr
| nline but_attr
;

//--Radio Group
radiogroup
: nline general_attr rad_group_attr radiobutton radiogroupelements
;

radiogroupelements
: radiobutton radiogroupelements
| line_comments RADIOGROUPEND {printf("%s", yytext);if(existCheckButton==1){checkedButton(checkButtonValue);} checkCounter(counterValue, rbuttonCnt);} 
;

rad_group_attr
: COUNTER {printf("%s", yytext);} int_cont_nocoms {counterValue = toInteger(yytext);} TAGEND {printf("%s", yytext);} 
| opt_rgroup_attr
;

opt_rgroup_attr
: ID {printf("%s", yytext);} str_cont_nocoms {checkUniqueID(yytext);} opt_rgroup_attr
| CHECKEDBUTTON {existCheckButton=1;printf("%s", yytext);} str_cont_nocoms {strcpy(checkButtonValue, yytext);} opt_rgroup_attr
| nline rad_group_attr
;

//--Radio Button
radiobutton
: line_comments RADIOBUTTONBEGIN {printf("%s", yytext);rbuttonCnt++; } nline general_attr rbut_attr
;

rbut_attr
: TEXT {printf("%s", yytext);} str_cont_nocoms EMPTYELEMENTEND {printf("%s", yytext);} 
| opt_radbut_attr
;

opt_radbut_attr
: ID {printf("%s", yytext);} str_cont_nocoms {checkUniqueID(yytext); insertRbuttonValues(yytext);} opt_radbut_attr
| nline rbut_attr
;

//--Progress Bar
progressbar
: nline general_attr opt_pbar_attr
;

opt_pbar_attr
: EMPTYELEMENTEND {printf("%s", yytext);} {if(existMax==1 && existProgress==1){checkProgressValue(progressValue,maxProgress);}}
| ID {printf("%s", yytext);} str_cont_nocoms {checkUniqueID(yytext);} opt_pbar_attr
| MAX {printf("%s", yytext);} int_cont_nocoms {existMax=1; maxProgress = toInteger(yytext);} opt_pbar_attr
| PROGRESS {printf("%s", yytext);} int_cont_nocoms {existProgress=1; progressValue=toInteger(yytext);} opt_pbar_attr
| nline opt_pbar_attr
;

//--Comments
line_comments
: comments
| line_comments comments
;

comments
: nline
| COMMENTS { printf("%s", yytext); }
;

nline 
: EOL { printf("%s", yytext); }
;

%%

int main (int argc, char **argv) {
	FILE *jfile = fopen(argv[1], "r");
	yyin = jfile;
    for(int i=0; i<N;i++){
        strcpy(idValues[i],"\"\"");
    }
	yyparse();
    printf("\n");
	return 0;
}


void yyerror (const char *errmsg) {
    printf("\n\nError in line %d: %s ", yylineno,errmsg);
} 

void checkLayoutValue(char *value){
    int first = toInteger(value);
    if(first<0){
        yyerror("The value must be only positive integer.\n");
        exit(1);
    }
    else if(first==0){
        int res;
        for(int i=0; i<2; i++){
            res = strcmp(value,layoutcont[i]);
            if(res == 0){
                break;
            }
        }
        if(res !=0){
            yyerror("The value must be only positive integer or \"match_parent\" or \"wrap_content\".\n");
            exit(1);
        }
    }
}

void insertRbuttonValues(char *idRbutton) {
    for (int i = 0; i < rbuttonCnt; i++) {
        int res1 = strcmp("\"\"", radioButtonValues[i]);
        if (res1 == 0) {
            strcpy(radioButtonValues[i], idRbutton);
            break;
        }
    }
}

void checkedButton(char *checkButtonValue){
    int check;
    for(int i=0; i<rbuttonCnt; i++){
        int res1 = strcmp(checkButtonValue,radioButtonValues[i]);
        if(res1==0){
            check = res1;
            break;
        } else{
            check = res1;
        }
    }
    if(check != 0){
        yyerror("Check button must be one value of radio button id.\n");
        exit(1);
    }
}



void checkUniqueID(char *idstr){
    int idCheckEmpty = strcmp("\"\"",idstr);
    if(idCheckEmpty == 0){
        yyerror("The ID attribute must have a valid value.\n");
        exit(1);
    }
    for(int i=0; i<N; i++){
        int res1 = strcmp("\"\"",idValues[i]);
        if(res1==0){
            strcpy(idValues[i], idstr);
            break;
        } else{
            int res2 = strcmp(idstr, idValues[i]);
            if(res2==0){
                yyerror("The ID attribute must have a unique value.\n");
                exit(1);
            }
        }
    }
}

void checkPaddingValue(char *padstr){
    int value = toInteger(padstr);
    if(value==0){
        yyerror("The padding attribute must have a value greater than 0.\n");
        exit(1);
    }
}

void checkProgressValue(int prog, int maxvalue){
    if(prog>maxvalue){
        yyerror("The progress attribute must be between 0 and the maximum value attribute.\n");
        exit(1);
    }
}

int toInteger(const char *s) {
    char cleanString[strlen(s) - 1];
    for (int i = 0; i < sizeof(cleanString) - 1; i++) {
        cleanString[i] = s[i + 1];
    }
    cleanString[sizeof(cleanString) - 1] = '\0';
    int intValue = atoi(cleanString);

    return intValue;
}

void checkCounter(int counterValue, int counter){
    if(counterValue != counter){
        yyerror("The counter value must match the sum of radio buttons.\n");
        exit(1);
    }

}

void initialArray(){
    for(int i=0; i<N;i++){
        strcpy(radioButtonValues[i],"\"\"");
    }
}
