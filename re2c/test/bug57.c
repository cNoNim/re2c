/* Generated by re2c */
#line 1 "bug57.re"
#include <stdio.h>

int scan(const char *p)
{
#define YYCTYPE char
    const char *YYCURSOR = p;
    const char *YYMARKER;


#line 13 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy2;
	case '<':	goto yy3;
	case '\\':	goto yy6;
	case 'a':	goto yy5;
	default:	goto yy7;
	}
yy2:
#line 15 "bug57.re"
	{ return YYCURSOR - p; }
#line 29 "<stdout>"
yy3:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '>':	goto yy15;
	case '\\':	goto yy14;
	case 'x':
	case 'y':	goto yy12;
	default:	goto yy4;
	}
yy4:
#line 16 "bug57.re"
	{ return 0; }
#line 43 "<stdout>"
yy5:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	goto yy9;
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy4;
	}
yy7:
	yych = *++YYCURSOR;
	goto yy4;
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	yych = *YYCURSOR;
yy9:
	switch (yych) {
	case '\\':	goto yy10;
	case 'a':	goto yy8;
	default:	goto yy2;
	}
yy10:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy4;
	} else {
		goto yy2;
	}
yy12:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '>':	goto yy15;
	case '\\':	goto yy14;
	case 'x':
	case 'y':	goto yy12;
	default:	goto yy11;
	}
yy14:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy12;
	default:	goto yy11;
	}
yy15:
	++YYCURSOR;
#line 14 "bug57.re"
	{ return YYCURSOR - p; }
#line 102 "<stdout>"
}
#line 17 "bug57.re"

}

int main()
{
    const char *str = "aaa\\baaa";
    int res = scan(str);
    printf("%d: %s\n", res, str + res);
    return 0;
}

