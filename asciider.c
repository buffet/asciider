#include <stdio.h>
main(a){for(char c[]=" ";(*c=getchar())^EOF;)printf(*c-'\n'?"\e[0;%dm  ":"\e[0m\n",(a=strcspn("krgybmcwKRGYBMCW",c))>7?a+93:a+40);}
