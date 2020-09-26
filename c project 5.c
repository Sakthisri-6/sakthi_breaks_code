#include<stdio.h>
int addition(int);
main()
{
	int a;
	printf("Enter the number u wanna find the sum\n");
	scanf("%d",&a);
	printf("Sum of the numbers %d",addition(a));
	return 0;
}
int addition(int x)
{
	int r, sum = 0;
	while(x>0)
	{
	r = x%10;
	sum = sum + r;
	x = x/10;
	
	
}
return sum;

}

