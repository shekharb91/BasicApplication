//Write a program to accept one number from user and print multiplication of factors of that number on screen.
//In
import java.util.*;
import java.lang.*;


class Assignment4_1
{
	public static void main(String args[])
	{
		int iValue=0, iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter a Number");
		iValue= sobj.nextInt();
		
		Demo obj1 = new Demo();
		iRet = obj1.MultFact(iValue);
		
		System.out.println("Multiplication of Factors : "+iRet);
	}
}

class Demo
{
	int MultFact(int iNo)
	{
		int iCnt=0, iAns=1;
		
		if (iNo<0)
		{
			iNo=-iNo;
		}
		System.out.println("Factors : ");
		for(iCnt=1; iCnt<=(iNo/2); iCnt++)
		{
			if(iNo%iCnt==0)
			{
				iAns=iAns*iCnt;
				System.out.println(iCnt);
			}
		}
		return iAns;
	}
}