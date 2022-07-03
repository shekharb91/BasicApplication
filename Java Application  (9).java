//WAP to accept one number from user and summation of  all its non factors on screen.
//In
import java.io.*;
import java.lang.*;

class Assignment5_4
{
	public static void main (String args[])
	{
			int iValue= 0, iRet=0;
			InputStreamReader  iobj = new InputStreamReader(System.in);
			BufferedReader bobj = new BufferedReader(iobj);
			
			try
			{
				System.out.println("Enter your Number");
				iValue=Integer.parseInt(bobj.readLine());
				
				Demo dobj = new Demo(iValue);
				iRet=dobj.SumNonFact();
				
				System.out.println("Summation of non factors: "+iRet);
				
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
	
	int SumNonFact ()
	{
		int  iCnt=0, iSum=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1; iCnt<iNo ;iCnt++)
		{
			if(iNo%iCnt!=0)
			{
				iSum=iSum+iCnt;
			}
		}
		
		return iSum;
	}
	
	
}


