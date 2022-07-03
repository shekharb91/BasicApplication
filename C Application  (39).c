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

void DisplayPerfect(PNODE head);
void DisplayPrime(PNODE head);
void DisplayEven(PNODE head);
void SumDigit(PNODE head);
int DisplaySecMaximum(PNODE head);



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
	DisplayPerfect(first);
	
	DisplayPrime(first);
	DisplayEven(first);
	SumDigit(first);
	iRet=DisplaySecMaximum(first);
	printf("\nThe Second Largest element in all elements of linked list is : %d",iRet);
	
	return 0; 
}

/*
1. write program which displays all elements which are perfect from singly linear linked list.

*/

void DisplayPerfect(PNODE head)
{
	printf("\nPerfect Numbers :");
	while(head!=NULL)
	{
		int i=0, iNo=0, iSum=0;
		iNo=head->data;
				
		for(i=1;i<=(iNo/2);i++)
		{
			
			if(iNo%i==0)
			{
				iSum=iSum+i;
				
			}
		}
		
		if(iSum==iNo)
		{
			printf("%d\t",head->data);
		}
		head=head->next;
	}
	
}

/*
2. write program which displays all elements which are prime from singly linear linked list.

*/

void DisplayPrime(PNODE head)
{
	printf("\nPrime Numbers :");
	while(head!=NULL)
	{
		int i=0, iNo=0;
		iNo=head->data;
				
		for(i=2;i<=(iNo/2);i++)
		{
			
			if(iNo%i==0)
			{
				break;				
			}
		}
		if(i==((iNo/2)+1))
		{
			printf("%d\t",head->data);
		}
		head=head->next;
	}
	
}

/*
3. write program which displays all even elements from singly linear linked list.

*/

void DisplayEven(PNODE head)
{
	printf("\nEven Numbers :");
	while(head!=NULL)
	{
		int iNo=0;
		iNo=head->data;
		if(iNo%2==0)
		{
			printf("%d\t",head->data);
		}
		head=head->next;
	}
}
/*
4. write program which returns second largest element from singly linear linked list.

*/


int DisplaySecMaximum(PNODE head)
{
	int Max=0,Min=0,SecMax=0;
	PNODE tptr=head;
	Max=(head->data);
	Min=(head->data);
	
	while(head!=NULL)
	{
		if((head->data)>Max)
		{
			Max=(head->data);
		}
		
		if((head->data)<Min)
		{
			Min=(head->data);
		}
	
		head=head->next;
	}
	SecMax=Min;
	
	while(tptr!=NULL)
	{
		if(((tptr->data)>SecMax)&&((tptr->data)!=Max))
		{
			SecMax=(tptr->data);
		}
		
		tptr=tptr->next;
	}
	return SecMax;
}
/*5. write program which display addition of digits of element from singly linear linked list.

*/

void SumDigit(PNODE head)
{
	printf("\nAddition of digits of elements :\n");
	while(head!=NULL)
	{
		int iNo=head->data;
		int iSum=0;
		while(iNo!=0)
		{
			iSum=iSum+(iNo%10);
			iNo=iNo/10;
		}
		printf("%d\t",iSum);
		head=head->next;
	}
}
