// Write a program to accept number from user and return count of evev digits. 

import java.io.*;
import java.lang.*;

class Assignment7_1
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
		iRet= obj.CountEven(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		
		System.out.println("Number contains "+iRet+" even digits.");
		
	}
}

class Demo
{
	int CountEven(int iNo)
	{
		int idigit=0, iCnt=0;
		while(iNo>0)
		{
			idigit=iNo%10;
			if(idigit%2!=0)
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
	}
}