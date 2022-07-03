//Write a recursive progrm which accept number from user and codisplay below pattern.
// Input: 5
// Output:  A	B	C	D	E

# include <stdio.h>

void Display(int iNo)
{
	static char iCnt='A';
	if(iNo!=0)
	{
		printf("%c\t", iCnt);
		
		iCnt++;
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