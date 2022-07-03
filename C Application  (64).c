//WAP to accept one string from user and reverse the string in place.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int StrRevX(char *Str)
{
	char * start=Str;
	char * end=Str;
	char temp='\0';
	
	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
	
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%s",Arr);
	
	StrRevX(Arr);
	
	printf("Revesr string :%s\n", Arr);
	
	return 0;
}   