#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	int a;
	if(ch>='0'&& ch<='9')
	printf("given character is an number");
	else
	printf("given character not an number");
	return 0;
}