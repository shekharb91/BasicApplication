//WAP to accept one string from user and one number from user and copy the contents of that string into another string.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrCpyX(char *Src, char *Dest, int ivalue)
{
		
	for(int i=0; i<ivalue; i++)
	{
		*Dest=*Src;
		
		Src++;
		Dest++;
	}
	*Dest='\0';
	
}

int main()
{
	char Arr[20];
	char Brr[20];
	int iNo=0;
	
	printf("Enter the string\n");
	scanf("%s",Arr);
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	StrCpyX(Arr, Brr, iNo);
	
	printf("Copied String  :%s\n", Brr);
	
	return 0;
}   