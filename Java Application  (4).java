//Write a program to accept one number from user and print summation of its non factors of that number on screen.
//In
import java.util.*;
import java.lang.*;


class Assignment4_4
{
	public static void main(String args[])
	{
		int iValue=0, iAns=0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		iValue=sobj.nextInt();
		
		Demo dobj = new Demo();
		iAns= dobj.SumNonFact(iValue);

		System.out.println("The Summation of non factors :"+iAns);
	
	}
}

class Demo
{
	int SumNonFact(int iNo)
	{
		int iCnt=0, iAns=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		
		for(iCnt=1; iCnt<iNo; iCnt++)
		{
			if(iNo%iCnt !=0)
			{
				iAns=iAns+iCnt;
			}	
		}
		return iAns;
		
		
	}
}