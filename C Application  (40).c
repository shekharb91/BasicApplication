//Consider below code snippet to solve given problem statement.

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Reverse (PNODE head);
void DisplayPalindrome(PNODE head);
void DisplayProductDigit(PNODE head);
void DisplaySmallDigit(PNODE head);
void DisplayLargeDigit(PNODE head);

void InsertFirst(PPNODE head, int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void Display(PNODE head)
{
	printf("\nLinkedList Numbers :\n");
	while(head!=NULL)
	{
		
		printf("%d\t",head->data);
	
		head=head->next;
	}
}


int main()
{
	PNODE first = NULL;
	int iRet=0;
	
	
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	InsertFirst(&first, 6);
	InsertFirst(&first, 21);
	InsertFirst(&first,128);
		
	Display(first);

	//call all functions for below problem statements.
	Reverse (first);
	DisplayPalindrome(first);
	DisplayProductDigit(first);
	DisplaySmallDigit(first);
	DisplayLargeDigit(first);
	
	return 0; 
}

/*
1. write program which reverse each element from singly linear linked list.

*/

void Reverse (PNODE head)
{
	printf("\nRevNO from Linked List:\n");
	while(head!=NULL)
	{
		int iNo=head->data;
		int iDigit=0, RevNO=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			RevNO=(RevNO*10)+iDigit;
			iNo=iNo/10;
		}
		printf("%d\t",RevNO);
		head=head->next;
	}
}


/*
2. write program which display all palindrome numbers from singly linear linked list.

*/

void DisplayPalindrome(PNODE head)
{
	printf("\n Palindrome Numbers from Linked List:\n");
	while(head!=NULL)
	{
		int iNo=head->data;
		int iDigit=0, RevNO=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			RevNO=(RevNO*10)+iDigit;
			iNo=iNo/10;
		}
		if(head->data==RevNO)
		{
			printf("%d\t",RevNO);
		}
		head=head->next;
	}
}


/*
3. write program which display product of digits of all elements from singly linear linked list.

*/

void DisplayProductDigit(PNODE head)
{
	printf("\n Product of digits of all elements from Linked List:\n");
	while(head!=NULL)
	{
		int iNo=head->data;
		int iDigit=0, Product=1;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit!=0)
			{
				Product=Product*iDigit;
			}
			iNo=iNo/10;
		}
		
			printf("%d\t",Product);
		
		head=head->next;
	
	}
}


/*
4. write program which display smallest of digits of all elements from singly linear linked list.

*/

void DisplaySmallDigit(PNODE head)
{
	printf("\n Smallest of digits of all elements from Linked List:\n");
	while(head!=NULL)
	{
		int iNo=head->data;
		int iDigit=0, Small=(iNo%10);
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit<Small)
			{
				Small=iDigit;
			}
			iNo=iNo/10;
		}
		
			printf("%d\t",Small);
			head=head->next;
	}
}

/*
4. write program which display largest of digits of all elements from singly linear linked list.

*/

void DisplayLargeDigit(PNODE head)
{
	printf("\n Largest of digits of all elements from Linked List:\n");
	while(head!=NULL)
	{
		int iNo=head->data;
		int iDigit=0, Large=(iNo%10);
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit>Large)
			{
				Large=iDigit;
			}
			iNo=iNo/10;
		}
		
			printf("%d\t",Large);
			head=head->next;
	}
}