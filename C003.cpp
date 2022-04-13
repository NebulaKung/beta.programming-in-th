#include<stdio.h>
int main()
{
	int n;
	int in;
	int max;
	int min;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &in);
		if(i==1)
		{
			max = in;
			min = in;
		}
		else if(in > max)
		{
			max = in;
		}
		else if(in < min)
		{
			min = in;
		}
	}
	printf("%d\n", min);
	printf("%d", max);
	return 0;
}
