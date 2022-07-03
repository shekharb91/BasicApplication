// Write a program to accept directory name from user and create that directory.

import java.lang.*;
import java.io.*;

class Assignment43_3
{
	public static void main (String args[])
	{
		String Fname = "",Fpath = "";
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		try
		{
			System.out.println("Enter a Directory name");
			Fname=bobj.readLine();
			System.out.println("Enter a file path");
			Fpath=bobj.readLine();
			FileHandling obj = new FileHandling();
			obj.CreateDir(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class FileHandling
{
	void CreateDir(String Name, String Path)
	{
				
			File dir = new File(Path+Name);
			boolean bret=dir.mkdir();
		
			if(bret==true)
			{
				System.out.println( "Directory is created sucessfully");
			}
			else
			{
				System.out.println( "Directory is not created");
			}
		
		
	}
}