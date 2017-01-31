#include <stdio.h>
int main()
{
  char str[50],sub[30];
  int i, j=0, k;
  printf("enter the string:\n");
  scanf("%s",str);
  printf("enter the substring to match:\n");
  scanf("%s",sub);
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j])
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)
        if(str[k]!=sub[j])
            break;
       if(!sub[j]){
        printf("yes its is a substring");
        return 0;}
    }
  }
  printf("Not its is not a substring");
 return 0;
}
