//Write a program to accept one number from user and print diffrence of its factors and non factors of that number on screen.
//In
import java.util.*;
import java.lang.*;


class Assignment4_5
{
	public static void main(String args[])
	{
		int iValue=0, iAns=0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		iValue=sobj.nextInt();
		
		Demo dobj = new Demo();
		iAns= dobj.FactDiff(iValue);
		
		System.out.println("The diffrence between Factors and non factors :"+iAns);
	
	}
}

class Demo
{
	int FactDiff(int iNo)
	{
		int iCnt=0, iAns=0, iSumFact=0, iSumNonFact=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1; iCnt<=(iNo/2); iCnt++)
		{
			if(iNo%iCnt ==0)
			{
				iSumFact=iSumFact+iCnt;
			}	
		}
		
		for(iCnt=1; iCnt<iNo; iCnt++)
		{
			if(iNo%iCnt !=0)
			{
				iSumNonFact=iSumNonFact+iCnt;
			}	
		}
		return iSumFact-iSumNonFact;
				
	}
}