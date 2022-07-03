// Write a program to accept number from user and return diffrence between summation of even digits and summation of odd digits.

import java.io.*;
import java.lang.*;

class Assignment7_5
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
		iRet= obj.Diffrence(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		
		System.out.println("Diffrence of summation of even and odd digits : "+iRet);
		
	}
}

class Demo
{
	int Diffrence(int iNo)
	{
		int idigit=0, iSumE=0, iSumO=0;
		
		while(iNo>0)
		{
			idigit=iNo%10;
			if(idigit%2==0)
			{
				iSumE=iSumE+idigit;
			}
			else
			{
				iSumO=iSumO+idigit;
			}
			iNo=iNo/10;
		}
		return iSumE-iSumO;
	}
}