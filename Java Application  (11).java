// Write a program to accept number from user and display its digits in reverse order.

import java.io.*;
import java.lang.*;

class Assignment6_1
{
	public static void main (String args[])
	{
		int iValue = 0;
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		try
		{
		System.out.println("Enter a number");
		iValue=Integer.parseInt(bobj.readLine());
		Demo obj = new Demo();
		obj.DigitRev(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class Demo
{
	void DigitRev(int iNo)
	{
		int iDigit=0;
		
		System.out.println("Digits in reverse order");
		while(iNo>0)
		{
			iDigit=iNo%10;
			System.out.println(iDigit);
			iNo=iNo/10;
			
		}
	
	}
}