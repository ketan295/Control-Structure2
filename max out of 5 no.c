#include <stdio.h>

main() 
{
     int a,b,c,d,e;
	printf("\nEnter the value of a,b,c,d,e :\n ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	if(a>b && a>c && a>d && a>e)
	{
		printf("%d is maximum",a);
	}
	else if(b>c && b>d && b>e)
	{
		printf("%d  is maximum",b);
	}
	else if(c>d && c>e)
	
	{
		printf("%d is maximum",c);
	}
	else if(d>e)
	{
		printf("%d is maximum",d);
	}
	else 
	{
		printf("%d is maximum",e);
	}
}