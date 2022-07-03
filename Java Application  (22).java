// Write a program to accept file name from user and oopen that file and display the contents on screen.


import java.lang.*;
import java.io.*;

class Assignment42_2
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
			obj.Read(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class OpenFile
{
	void Read(String Name, String Path)
	{
		
		int j=0;
		try
		{
			FileReader fr = new FileReader(Path+Name+".txt");
			while ((j = fr.read()) != -1)
			{
				System.out.print((char)j);
				
			}
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}