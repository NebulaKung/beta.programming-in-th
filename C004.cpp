#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d", &x, &y);
	int in1[x][y];
	int in2[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d", &in1[i][j]);
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d", &in2[i][j]);
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ", in1[i][j]+in2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
