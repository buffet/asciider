#include <stdio.h>
main(a){for(char c[]=" ";(*c=getchar())^EOF;)printf(*c-'\n'?"\033[0;%dm  ":c,(a=strcspn("krgybmcwKRGYBMCW",c))>7?a+93:a+40);}
