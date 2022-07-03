//Accept N numbers from user and return diffrence of summation of even and odd numbers.

# include <stdio.h>
# include <stdlib.h>

int DiffrenceEvenOdd(int Arr[], int iLength)
{
	int iCnt=0, iSumE=0, iSumO=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iSumE=iSumE+Arr[iCnt];
		}
		else
		{
			iSumO=iSumO+Arr[iCnt];
		}
	}
	return iSumE-iSumO;
}

int main()
{
	int iSize=0, iRet=0;
	int * ptr=NULL;
	
	printf("Enter no of elements\n");
	scanf("%d", &iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements:\n", iSize);
	for(int iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);
	}
	
	iRet=DiffrenceEvenOdd(ptr, iSize);
	printf("Diffrence of summation of even and odd numbers: %d",iRet);
	return 0;
}