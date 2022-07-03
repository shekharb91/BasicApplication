//WAP to accept one number from user and display all its non factors on screen.
//In
import java.io.*;
import java.lang.*;

class Assignment5_3
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
				dobj.DisplayNonFact();
				
				
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
	
	void DisplayNonFact ()
	{
		int  iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		System.out.println("Non Factors are:");
		
		for(iCnt=1; iCnt<iNo ;iCnt++)
		{
			if(iNo%iCnt!=0)
			{
				System.out.println(iCnt);
			}
		}
		
		
	}
	
	
}


