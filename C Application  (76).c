//WAP to check whther 5th & 18th bit is on or off.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 131088;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 131088)
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