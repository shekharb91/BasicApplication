//Write a program to accept one number from user and print factors of that number in decreasing order on screen.
//In
import java.util.*;
import java.lang.*;


class Assignment4_2
{
	public static void main(String args[])
	{
		int iValue=0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		iValue=sobj.nextInt();
		
		Demo dobj = new Demo();
		dobj.FactRev(iValue);
	
	}
}

class Demo
{
	void FactRev(int iNo)
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		System.out.println("Factors are :");
		for(iCnt=(iNo/2); iCnt>=1; iCnt--)
		{
			if(iNo%iCnt==0)
			{
				System.out.println(iCnt);
			}
				
		}
		
		
	}
}