// Write a program to accept number from user and return multiplication of all digits.

import java.io.*;
import java.lang.*;

class Assignment7_4
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
		iRet= obj.MultDigits(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		
		System.out.println("Multiplication of digits : "+iRet);
		
	}
}

class Demo
{
	int MultDigits(int iNo)
	{
		int idigit=0, iMult=1;
		while(iNo>0)
		{
			idigit=iNo%10;
			iMult=iMult*idigit;
			iNo=iNo/10;
		}
		return iMult;
	}
}