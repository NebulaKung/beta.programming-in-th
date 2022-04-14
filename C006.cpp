#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	scanf("%lf %lf", &x, &y);
	double z= sqrt(pow(x,2)+pow(y,2));
	//float z= sqrt(pow(x,2)+pow(y,2));
	
	
	printf("%.6lf", z);
	
	return 0;
}
