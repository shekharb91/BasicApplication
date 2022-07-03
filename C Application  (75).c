//WAP to check whther 15th bit is on or off.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 16384;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
	int iNo=0;
	bool bret=false;
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