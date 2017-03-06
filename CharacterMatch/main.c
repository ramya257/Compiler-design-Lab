#include <stdio.h>
#include <string.h>

int main(void) {
	int i,j;
	char s[100];
	printf("enter the string");
	scanf("%s",s);
	printf("enter the positions to match:");
	scanf("%d%d",&i,&j);
	int n=strlen(s);
	i=i%n;
	j=j%n;
	if(s[i]==s[j])
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}
