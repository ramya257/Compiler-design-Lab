#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10];
    int i,j,n=0;
    printf("enter the string \n");
    scanf("%s",s);
    n=strlen(s);
    i=0;
    while(s[i]!='\0')
    {
    if(s[i]>='A'&&s[i]<='Z')
    {
    s[i]=s[i]+32;
    }
    else if(s[i]>='a'&&s[i]<='z')
    {
    s[i]=s[i]-32;
    }
    i++;
    }
    printf("toggled string:%s",s);
    return 0;
}
