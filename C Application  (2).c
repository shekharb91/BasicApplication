//Program to print 5 times Marvellous on Screen

# include <stdio.h>

void Display()
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=5; iCnt++ )
	{
		printf("Marvellous\n",iCnt);
	}
}

int main()
{
	Display();
	
	return 0;
}