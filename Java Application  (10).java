//WAP to accept one number from user and return diffrence betweem summation of  all its factors and non factors on screen.
//In
import java.io.*;
import java.lang.*;

class Assignment5_5
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
				iRet=dobj.DiffFact();
				
				System.out.println("diffrence betweem summation of  all its factors and non factors: "+iRet);
				
			}
			catch(IOException obj)
			{
				System.out.println(obj);
			}
		
			
	}
	
}

class Demo
{
	int iNo;
	
	Demo(int i)
	{
		iNo=i;
	}
	
	int DiffFact ()
	{
		int  iCnt=0, iSumF=0, iSumNF=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1; iCnt<iNo ;iCnt++)
		{
			if(iNo%iCnt!=0)
			{
				iSumNF=iSumNF+iCnt;
			}
		}
		
		for(iCnt=1; iCnt<=(iNo/2) ;iCnt++)
		{
			if(iNo%iCnt==0)
			{
				iSumF=iSumF+iCnt;
			}
		}
		
		return iSumF-iSumNF;
	}
	
	
}


T