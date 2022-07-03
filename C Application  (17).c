//Accept N numbers from user and display all such elements which are even and divisible by 5.

# include <stdio.h>
# include <stdlib.h>

void EvenDivisible5(int Arr[], int iLength)
{
	int iCnt=0;
	printf("the numbers which are even and divisible 5 are:\n");
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt]%5==0)&&(Arr[iCnt]%2==0))
		{
			printf("%d\n", Arr[iCnt]);
		}
	
	}
}

int main()
{
	int iSize=0;
	int * ptr=NULL;
	
	printf("Enter no of elements\n");
	scanf("%d", &iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements:\n", iSize);
	for(int iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);
	}
	
	EvenDivisible5(ptr, iSize);
	free(ptr);
	return 0;
}