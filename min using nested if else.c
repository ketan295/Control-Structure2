#include <stdio.h>

main()
{
    int n1, n2, n3; 
    printf("Enter three numbers :");
    scanf("%d %d %d", &n1, &n2, &n3); 
    
if(n1<n2 && n1<n3)
	{
		printf("%d is the smallest number.",n1);
	}
	else if(n2 < n3)
	{
		printf("%d is the smallest number.",n2);
	}
	else
	{
		printf("%d is the smallest number.",n3);
	}	
	return 0;
}