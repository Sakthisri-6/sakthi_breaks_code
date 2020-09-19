#include<stdio.h>
main()
{
	int o;
	printf("please select what you wanna eat :)\n");
	printf("Your options are:\n1.sambar rice\t\tRs.70\n2.Full meals\t\tRs.140\n3.Panneer fried ricer\tRs.120\n4.Butter naan\t\tRs.20\n5.veg noodles\t\tRs.95\n");
	scanf("%d",&o);
	switch(o)
		{
		case 1:
			{
				printf("Your food today is SAMBAR RICE\nYou have to pay Rs.70\n");
				break;
			}
		case 2:
			{
				printf("Your food today is FULL MEALS\nYou have to pay Rs.140\n");
				break;
			}
		case 3:
			{
				printf("Your food today is PANNEER FRIED RICE\nYou have to pay Rs.120\n");
				break;
			}
		case 4:
			{
				printf("Your food today is BUTTER NAAN\nYou have to pay Rs.20\n");
				break;
			}
		
		case 5:
			{
				printf("Your food today is VEG NOODLES\nYou have to pay Rs.95\n");
				break;
			}
		default:
		    {
		    	printf("Oops!You have chosen wrong option\n");
		    	break;
			
			}	
	}
	return 0;
}
