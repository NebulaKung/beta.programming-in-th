#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int sum = a+b+c;
	if(sum < 50)
	{
		printf("F");
	}
	else if(sum < 55)
	{
		printf("D");
	}
	else if(sum < 60)
	{
		printf("D+");
	}
	else if(sum < 65)
	{
		printf("C");
	}
	else if(sum < 70)
	{
		printf("C+");
	}
	else if(sum < 75)
	{
		printf("B");
	}
	else if(sum < 80)
	{
		printf("B+");
	}
	else
	{
		printf("A");
	}
	return 0;
}
