//Write a recursive progrm which accept number from user and codisplay below pattern.
// Input: 5
// Output: 5 * 4 * 3 * 2 * 1 *

# include <stdio.h>

void Display(int iNo)
{
	
	if(iNo!=0)
	{
		printf("%d\t*\t", iNo);
		
		iNo--;
		
		Display(iNo);		
	}
	
}


int main()
{
	int iNo=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
		
	return 0;
}