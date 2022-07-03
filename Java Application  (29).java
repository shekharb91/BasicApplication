// Write a program to accept directory name from user and display all names of files from that directory with size of file.

import java.lang.*;
import java.io.*;

class Assignment43_5
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
				try
				{	for(int i=0; i<FileList.length;i++)
					{
						FileReader fr = new FileReader(Path+"Demo\\"+FileList[i]);
				
						int j=0;
						String str="";
						while ((j = fr.read()) != -1)
						{
							str =str+((char)j);
							
						}
						System.out.println( "File Name :"+FileList[i]+"   Size : "+str.length()+" bytes");
						fr.close();
					}
				}
				catch(IOException obj)
				{
					System.out.println(obj);
				}
			}
		
		
	}
}