// Write a program to accept number from user and count frequnecy of 2 in it.

import java.io.*;
import java.lang.*;

class Assignment6_3
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
		iRet= obj.CountTwo(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		
		System.out.println("Number contains two "+iRet+" times.");
		
	}
}

class Demo
{
	int CountTwo(int iNo)
	{
		int idigit=0, iCnt=0;
		while(iNo>0)
		{
			idigit=iNo%10;
			if(idigit==2)
			{
				iCnt++;
			}
			iNo=iNo/10;
		}
		return iCnt;
	}
}