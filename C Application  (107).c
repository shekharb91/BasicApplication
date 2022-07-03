//Write application which accepts the file name from user. Read all data from file and display the contents on screen.


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>


int main()
{
	char fName[20];
	char Data[100];
	int fd=0;
	int iret=0;
	printf("Enter the file name which you want to open\n");
	scanf("%s",fName);
	fd =open(fName, O_RDONLY);
	
	if(fd==-1)
	{
		printf("File unable to open\n");
		return -1;
	}
	
	while((iret=read(fd,Data,sizeof(Data)))!=0)
	{
		write(1,Data,iret);
	}
	
	return 0;
}   