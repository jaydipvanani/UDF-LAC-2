#include<stdio.h>

void clac()
{
	int n,n1,n2;
	do
	{
		printf("\n ENTER YOUR CHOICE :-");
		scanf("%d",&n);
		
		if(n==6)
		{
			printf("EXIT....");
		}
		if(n>6)
		{
			printf("ENTER VALID VALUE...");
		}
		if(n<6)
		{
			printf("ENTER FIRST NUMBER :- ");
			scanf("%d",&n1);
			printf("ENTER SECOND VALUE :- ");
			scanf("%d",&n2);
			
			switch(n)
			{
				case 1:
					printf("%d + %d = %d ",n1,n2,n1+n2);
					break;
				case 2:
					printf("%d - %d = %d ",n1,n2,n1-n2);
					break;
				case 3:
					printf("%d * %d = %d ",n1,n2,n1*n2);
					break;
				case 4:
					printf("%d / %d = %d ",n1,n2,n1/n2);
					break;
				case 5:
					printf("%d %% %d = %d ",n1,n2,n1%n2);
					break;
				default:
					printf(" ENTER VALID VALUE....");
				
			}
		}
	}
	while(n<6);
}

main()
{
	printf("\n1.ADDITION\n");
	printf("2.SUBSTRACTION\n");
	printf("3.MULTIPLICATION\n");
	printf("4.DIVISON\n");
	printf("5.MODULS\n");
	printf("6.EXIT\n");
	clac();
}
