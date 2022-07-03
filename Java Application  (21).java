// Write a program to accept file name from user and oopen that file.


import java.lang.*;
import java.io.*;

class Assignment42_1
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
			OpenFile obj = new OpenFile();
			obj.Open(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class OpenFile
{
	void Open(String Name, String Path)
	{
		
		int j=0;
		try
		{
			FileReader fr = new FileReader(Path+Name+".txt");
			System.out.print("File is opened successfully");
			
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}