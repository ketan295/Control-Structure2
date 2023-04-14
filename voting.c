#include<stdio.h>

main()

{
	int age;
	printf("plzz enter numner your age  : ");
	scanf("%d",&age);
	if(age<=0)
	{
		printf("plzz enter your correct age ");
	}
	else if(age>=18)
	{
		printf("you are eligible for voting ");
	}
	else if(age<18) 
	{
		printf(" you are not  eligible for voting");
	}

}

