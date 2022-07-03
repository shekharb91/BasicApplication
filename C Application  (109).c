//Write application which accepts the file name from user and one string from user. Write that string at the end of file.

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>


int main()
{
	char fName[20];
	char Data[20];
	int fd=0;
	int iret=0, Size=0;
	printf("Enter the file name which you want to open\n");
	scanf("%s",fName);
	fd =open(fName, O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("File unable to open\n");
		return -1;
	}
	
	printf("Enter the data which you want to add in file\n");
	scanf("%s",Data);
	
	write(fd,Data,strlen(Data));
	
	return 0;
}   