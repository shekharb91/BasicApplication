//WAP to accept one number from user and display its factors in decreasing order on screen.
//In
import java.io.*;
import java.lang.*;

class Assignment5_2
{
	public static void main (String args[])
	{
			int iValue= 0;
			InputStreamReader  iobj = new InputStreamReader(System.in);
			BufferedReader bobj = new BufferedReader(iobj);
			
			try
			{
				System.out.println("Enter your Number");
				String sValue=bobj.readLine();
				iValue=Integer.parseInt(sValue);
				
				Demo dobj = new Demo(iValue);
				dobj.DisplayFact();
				
				
			}
			catch(IOException obj)
			{
				System.out.println(obj);
			}
		
			
	}
	
}

class Demo
{
	int iNo=0;
	
	Demo(int i)
	{
		iNo=i;
	}
	
	void DisplayFact ()
	{
		int  iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		System.out.println("Factors are:");
		
		for(iCnt=(iNo/2); iCnt>=1 ;iCnt--)
		{
			if(iNo%iCnt==0)
			{
				System.out.println(iCnt);
			}
		}
		
		
	}
	
	
}


