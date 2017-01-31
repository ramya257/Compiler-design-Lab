#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[10];
    int i,j,n=0,l=0;
    printf("enter the string\n");
    scanf("%s",s);
     l=strlen(s);
    for(i=l;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",s[j]);

        }
        printf("\n");
         n++;
    }
    printf("$");
    printf("total no of suffixes are :%d",n);
    return 0;
}
