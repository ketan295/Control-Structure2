#include <stdio.h>

int main()
{
	int a,b,c,d,max;
	printf("Enter four numbers :");
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);

	max = (a > b && a > c && a> d) ? a : ((b > c && b > d) ? b : (c> d ? c : d));

	printf("Largest number among %d, %d, %d and %d is %d.",
		   a, b, c, d, max);
}