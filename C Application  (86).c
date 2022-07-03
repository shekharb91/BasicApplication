//Write a recursive progrm  to display below pattern.
// Output:  1	2	3	4	5

# include <stdio.h>

void Display()
{
	static int iCnt=1, iNo=5;
	if(iCnt<=iNo)
	{
		printf("%d\t", iCnt);
		
		iCnt++;
		
		Display();		
	}
	
}


int main()
{
	Display();
		
	return 0;
}