//Write a recursive progrm which accept number from user and codisplay below pattern.
// Input: 5
// Output:  1	2	3	4	5

# include <stdio.h>

void Display(int iNo)
{
	static int iCnt=1;
	if(iCnt<=iNo)
	{
		printf("%d\t", iCnt);
		
		iCnt++;
		
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