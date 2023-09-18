#include<stdio.h>
#include<conio.h>

int main ()
{
	int no = 0 ;
	
	printf("\n Enter number = ");
	scanf("%d",&no);
	
	  if(no % 2 == 0)
	{
		printf("\n your no %d is even.",no);
	}
	else
	{
		printf("\n your no %d is odd.",no);
	}
	 
	 printf("\n\n Thanks");
	 
	getch();
	return 0;
}