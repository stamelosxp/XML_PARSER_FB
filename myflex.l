%option yylineno

%{
    #include "myparser.tab.h"
    extern int yyerror();
%}


digit    [0-9]
number   {digit}+
newline \n

%%
{newline} { return EOL; }
\"{number}\" {return POSITIVEINTEGER;}
\"(\\.|[^"\\])*\" {return STRING;}
"<!--"[^-]*"-->" {return COMMENTS; }
"<!--".* { yyerror("Comments must not contain '--'.\n");exit(1);}

">" { return TAGEND; }
"/>" { return EMPTYELEMENTEND; }

"<LinearLayout" { return LINEARBEGIN; }
"</LinearLayout>" { return LINEAREND; }

"<RelativeLayout" { return RELATIVEBEGIN; }
"</RelativeLayout>" { return RELATIVEEND; }

"<RadioGroup" { return RADIONGROUPBEGIN; }
"</RadioGroup>" { return RADIOGROUPEND; }

"<TextView" { return TEXTVIEWBEGIN; }
"<ImageView" { return IMAGEVIEWBEGIN; }
"<Button" { return BUTTONBEGIN; }
"<RadioButton" { return RADIOBUTTONBEGIN; }
"<ProgressBar" { return PROGRESSBARBEGIN; }

android:layout_width= { return WIDTH; }
android:layout_height= { return HEIGHT; }
android:id= { return ID; }
android:orientation= { return ORIENTATION; }
android:text= { return TEXT; }
android:textColor= { return TEXTCOLOR; }
android:src= { return SRC; }
android:padding= { return PADDING; }
android:checkedButton= { return CHECKEDBUTTON; }
android:max= { return MAX; }
android:progress= { return PROGRESS; }
android:counter= { return COUNTER;}


%%

int yywrap(void)
{
	return 1;
}