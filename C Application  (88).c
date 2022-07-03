//Write a recursive progrm  to display below pattern.
// Output:  A	B	C	D	E

# include <stdio.h>

void Display()
{
	static int iNo=5;
	static char iCnt='A';
	if(iNo!=0)
	{
		printf("%c\t", iCnt);
		
		iCnt++;
		iNo--;
		
		Display();		
	}
	
}


int main()
{
	Display();
		
	return 0;
}