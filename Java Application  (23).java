// Write a program to accept file name from user and open that file in write mode and write some data at the end of file.


import java.lang.*;
import java.io.*;

class Assignment42_3
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
			obj.Write(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class OpenFile
{
	void Write(String Name, String Path)
	{
		
		try
		{
			FileWriter fw = new FileWriter(Path+Name+".txt",true);
			fw.write("I love my Country");
			fw.close();
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}