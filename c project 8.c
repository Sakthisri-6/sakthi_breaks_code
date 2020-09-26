#include<stdio.h>
main()
{
	int i,j,p, sum =0;
	int arr[20][20];
	printf("Enter the number to make an 3*3 array\n");
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("element:[%d],[%d]:",i,j);
			scanf("%d",&arr[i][j]);
			printf("\n");
			int *p = &arr[i][j];
			
		}
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("%d",arr[i][j]);
			printf("\t");
		}
		printf("\n");
		
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j==i)
			sum = sum + arr[i][j];
		}
	}
	printf("The sum of the diagonal elements is:%d",sum);
	
}
