#include<stdio.h>
int main()
{
	int in[3];
	char c[4];
	int save;
	for(int i=0;i<3;i++)
	{
		scanf("%d", &in[i]);
		
	}
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
			{
				if(in[i-1]>in[i] && i>0)
				{
					save = in[i-1];
					in[i-1] = in[i];
					in[i] = save;
				
				}
				
			}
	}
	
	scanf("%s", c);

	for(int i=0;i<3;i++)
	{
		//printf("%d", in[i]);
		printf("%d ", in[c[i]-'A']);
	}

	return 0;
}
