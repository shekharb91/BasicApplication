// Write a java program to accept directory name from user and display all names of files from that directory which are regular file.

import java.lang.*;
import java.io.*;

class Assignment44_1
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
			obj.DisplayDir(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class FileHandling
{
	void DisplayDir(String Name, String Path)
	{
		String [] FileList;
		
			File Dir = new File(Path+Name);
			FileList=Dir.list();
		
			if(FileList==null)
			{
				System.out.println( "Either dir does not exist or is not a directory");
			}
			else
			{
				for(int i=0; i<FileList.length;i++)
				{
					
					File Dir1 = new File(Path+Name+"\\"+FileList[i]);
					boolean bret=Dir1.isFile();
					if(bret==true)
					{
						System.out.println( FileList[i]);
						
					}
									
				}
			}
		
		
	}
}