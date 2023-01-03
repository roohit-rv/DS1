#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter the string\n");
	gets(str);
	printf("%s",str);
	int count1=0;
	for(int i=0;i<20;i++)
	{
		if(str[i]==1)
		{
			count1++;
		}
	}
	printf("%d",count1);
	printf("sdfbidhf\n");
	printf("the given string is above\n");
	return 0;
}
