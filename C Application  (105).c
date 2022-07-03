//Write application which accepts the file name from user and open that in read mode.


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>


int main()
{
	char fName[20];
	int fd=0;
	printf("Enter the file name which you want to open\n");
	scanf("%s",fName);
	fd =open(fName, O_RDONLY);
	
	if(fd==-1)
	{
		printf("File unable to open\n");
		return -1;
	}
	
	printf("file is opened Sucessfully.\n");
	
	return 0;
}   