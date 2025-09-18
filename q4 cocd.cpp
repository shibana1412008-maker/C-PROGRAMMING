#include<stdio.h>
int main(){
	int num1,num2,diff;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	diff=num1-num2;
	if(diff%2==0)
	printf("the difference is even.\n",diff);
	else
	printf("the difference is odd.\n");

return 0;
}