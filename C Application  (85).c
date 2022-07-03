//Write a recursive progrm  to display below pattern.
// Output:  *  *  *  *  *

# include <stdio.h>

void Display()
{
	static int iNo=5;
	if(iNo!=0)
	{
		printf("*\t");
		
		iNo--;
		
		Display(iNo);		
	}
	
}


int main()
{
	
	Display();
		
	return 0;
}