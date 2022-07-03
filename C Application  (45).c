//Accept division of student from user and depends on the division 
//displa exam timing. There are 4 divisions in school a A, B,C and D.
//Exam of division A is 7 am, B is 8:30, C is 9:20 am, D is at 10:30am.
//(Application should be case insensitive)

#include <stdio.h>
#include <stdbool.h>

void DisplayTime(char ch)
{
	if(ch=='a' || ch=='A')
	{
		printf("Exam is at 7 am.");
	}
	else if(ch=='b' || ch=='B')
		{
		printf("Exam is at 8:30 am.");
	}
	else if(ch=='c' || ch=='C')
		{
		printf("Exam is at 9:20 am.");
	}
	else if(ch=='d' || ch=='D')
		{
		printf("Exam is at 10:30 am.");
	}
	else
	{
		printf("Invalid Input");
	}
		

}

int main()
{
	char cValue='\0';
		
	printf("Please enter the Division\n");
	scanf("%c", &cValue);
	
	DisplayTime(cValue);
	
	return 0;
}