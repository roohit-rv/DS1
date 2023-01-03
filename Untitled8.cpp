#include<stdio.h>
#include<string.h>
int main()
{
	char str[7];
	gets(str);
	printf("printing the string\n");
	printf("%s",str);
	int l=strlen(str);
	printf("\n");
	printf("printing the string till index 3\n");
	for(int i=0;i<l;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
