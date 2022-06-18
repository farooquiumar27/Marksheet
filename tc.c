#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* time(char *r)
{
char *z=(char*)malloc(sizeof(char)*50);
strcpy(z,r);
if(z[8]=='P')
{
z[0]=z[0]+1;
z[1]=z[1]+2;
}
z[8]='\0';
return z;
}
int main( )
{
char *x;
char*r=(char*)malloc(sizeof(char)*50);
printf("Enter time in format(hh:mm:ss_M) - ");
fgets(r,50,stdin);
fflush(stdin);
r[strlen(r)-1]='\0';
x=time(r);
printf("%s",x);
return 0;
}