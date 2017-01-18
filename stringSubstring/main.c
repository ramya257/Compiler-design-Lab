#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char s[10];
    int i,j,n=0,l=0,k;
    printf("enter the string\n");
    scanf("%s",s);
     l=strlen(s);
     for (i = 0; i < l; i++) {
      for (j = i + 1; j < l;) {
         if (s[j] == s[i]) {
            for (k = j; k < l; k++) {
               s[k] = s[k + 1];
            }
            l--;
         } else
            j++;
      }
   }
   printf(s);
    for(i=0;i<=l;i++)
    {
        for(j=0;j<=l;j++)
        {
            for (k=i;k<j;k++)
        {
            printf("%c",s[k]);
        }
        printf("\n");
        }
}
printf("$");
printf("\n");
    return 0;

}
