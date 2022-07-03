// Write a program to accept file name from user and check that file is regular or special.

import java.lang.*;
import java.io.*;

class Assignment43_2
{
	public static void main (String args[])
	{
		String Fname = "",Fpath = "";
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		try
		{
			System.out.println("Enter a file name");
			Fname=bobj.readLine();
			System.out.println("Enter a file path");
			Fpath=bobj.readLine();
			FileHandling obj = new FileHandling();
			obj.ChkFileType(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class FileHandling
{
	void ChkFileType(String Name, String Path)
	{
				
			File dir = new File(Path+Name);
			boolean bret=dir.isFile();
		
			if(bret==true)
			{
				System.out.println( "File is regular file");
				
			}
			else
			{
				System.out.println( "File is not exist or it is special file");
			}
				
		
	}
}