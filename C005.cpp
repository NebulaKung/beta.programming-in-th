#include<stdio.h>
#include<string.h>
int main()
{
	char in[10000];
	scanf("%[^\n]", &in);
	int len = strlen(in);
	
	int small=0;
	int big=0;
	
	
	for(int i=0;i<len;i++)
	{
		if(in[i]>='A' && in[i]<='Z')
		{
			big = 1;
		}
		else if(in[i]>='a' && in[i]<='z')
		{
			small = 2;
		}
	}
	int mix=big+small;
	
	if(mix==1)
	{
		printf("All Capital Letter");
	}
	else if(mix==2)
	{
		printf("All Small Letter");
	}
	else
	{
		printf("Mix");
	}
	
	
	return 0;
}
