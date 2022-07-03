//Accept one number from user and print "Hello" if number is less than 10 otherwise print "Demo" 

/*
Algoritham

START

Create variable iValue to accept input from user
 
 if no is less than 10 print Hello otherwise print Demo


END
*/

# include <stdio.h>

void Display(int iNo)
{
	
	
	if (iNo<10)
	{
		printf ("Hello\n");
	}
	}
	else
	{
		printf ("Demo\n");
	}

		
}

int main()
{
	int iValue=0;
	printf ("Enter first number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}