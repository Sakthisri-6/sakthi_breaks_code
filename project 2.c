#include<stdio.h>
main()
{
	int m;
	printf("Kindly enter your mark for grade calculation\n");
	scanf("%d",&m);
	printf("Your mark is %d\n",m);
	if((m >=85)&&(m <=100))
	{
		printf("Grade A\n");
	}
	else if((m>=70)&&(m<=84))
	{
		printf("Grade B\n");
	}
	else if((m>=55)&&(m<=69))
	{
		printf("Grade C\n");
	}
	else if((m>=40)&&(m<=54))
	{
		printf("Grade D\n");
	}
	else
	{
		printf("Grade F");
	}
		return 0;
	}
