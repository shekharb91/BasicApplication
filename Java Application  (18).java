// Write a program to accept number from user and return count of digits in between 3 nd 7. 

import java.io.*;
import java.lang.*;

class Assignment7_3
{
	public static void main (String args[])
	{
		int iValue = 0, iRet=0;
		
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		try
		{
		System.out.println("Enter a number");
		iValue=Integer.parseInt(bobj.readLine());
		Demo obj = new Demo();
		iRet= obj.CountRange(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		
		System.out.println("Number contains "+iRet+" digits in between 3 and 6.");
		
	}
}

class Demo
{
	int CountRange(int iNo)
	{
		int idigit=0, iCnt=0;
		while(iNo>0)
		{
			idigit=iNo%10;
			if(idigit<6 && idigit>3)
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
	}
}