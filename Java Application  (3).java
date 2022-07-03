//Write a program to accept one number from user and print its non factors of that number on screen.
//In
import java.util.*;
import java.lang.*;


class Assignment4_3
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
		
		System.out.println("Non Factors are :");
		for(iCnt=1; iCnt<iNo; iCnt++)
		{
			if(iNo%iCnt !=0)
			{
				System.out.println(iCnt);
			}
				
		}
		
		
	}
}