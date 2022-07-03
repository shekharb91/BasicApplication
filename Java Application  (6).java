//WAP to accept one number from user and display its multiplication of factors on screen.
//In
import java.io.*;
import java.lang.*;

class Assignment5_1
{
	public static void main (String args[])
	{
			int iValue= 0, iAns=0;
			InputStreamReader  iobj = new InputStreamReader(System.in);
			BufferedReader bobj = new BufferedReader(iobj);
			
			try
			{
				System.out.println("Enter your Number");
				String sValue=bobj.readLine();
				iValue=Integer.parseInt(sValue);
				
				Demo dobj = new Demo(iValue);
				iAns=dobj.MultFact();
				
				System.out.println("Multiplication of factors is :"+iAns);
				
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
	
	int MultFact ()
	{
		int  iCnt=0, FactMult=1;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1; iCnt<=(iNo/2) ;iCnt++)
		{
			if(iNo%iCnt==0)
			{
				FactMult=FactMult*iCnt;
			}
		}
		
		return FactMult;
	}
	
	
}


