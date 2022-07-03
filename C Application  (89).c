//Write a recursive progrm  to display below pattern.
// Output:  a b c d e

# include <stdio.h>

void Display()
{
	static int iNo=5;
	static char iCnt='a';
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