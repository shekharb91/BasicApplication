//Accept one string from user and displat it in reverse order.


# include <stdio.h>
# include <string.h>


void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
    }
}

int main()
{
	char Arr[20];
	
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	StrRevX(Arr);
	
	printf("String after reverse : %s", Arr);
	
	return 0;
}   