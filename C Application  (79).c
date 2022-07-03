//WAP to check whther 1st & last bit is on or off.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 2147483649;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 2147483649)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
	int iNo=0;
	bool bret=true;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	bret=CheckBit(iNo);
	
	if(bret == true)
    {
        printf("Bit is on");
    }
    else
    {
       printf("Bit is off");
    }
	
	return 0;
}   