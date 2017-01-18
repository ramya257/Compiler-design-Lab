#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10];
    int i,j,n=0;
    printf("enter the string\n");
    scanf("%s",s);
    printf("$");
    for(i=0;i<=strlen(s);i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",s[j]);

        }
        printf("\n");
         n++;
    }
    printf("total no of prefix are :%d",n);
    return 0;

}
