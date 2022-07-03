// Write a program to accept number from user and check whether it contains 0 in it or not

import java.io.*;
import java.lang.*;

class Assignment6_2
{
	public static void main (String args[])
	{
		int iValue = 0;
		boolean bRet= false;
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		try
		{
		System.out.println("Enter a number");
		iValue=Integer.parseInt(bobj.readLine());
		Demo obj = new Demo();
		bRet= obj.ChkZero(iValue);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		if(bRet==true)
		{
			System.out.println("Number Contains zero");
		}
		else
		{
			System.out.println("Number does not contain zero");
		}
	}
}

class Demo
{
	boolean ChkZero(int iNo)
	{
		
		boolean bFlag=false;
		while(iNo>0)
		{
			if(iNo%10==0)
			{
				bFlag= true;
				break;
			}
			
			iNo=iNo/10;	
		}
		
		return bFlag;		
	}
}