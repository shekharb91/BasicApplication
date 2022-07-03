// Write a program to accept 2 file names from user and open first file and create new file and copy the data of first file in second file.


import java.lang.*;
import java.io.*;

class Assignment43_1
{
	public static void main (String args[])
	{
		String Fname1 = "",Fpath1 = "";
		String Fname2 = "",Fpath2 = "";
		
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		try
		{
			System.out.println("Enter a first file name");
			Fname1=bobj.readLine();
			System.out.println("Enter first file path");
			Fpath1=bobj.readLine();
			System.out.println("Enter a file name which is to be created:");
			Fname2=bobj.readLine();
			System.out.println("Enter path for the same:");
			Fpath2=bobj.readLine();
			FileHandling obj = new FileHandling();
			obj.CopyFile(Fname1,Fpath1,Fname2,Fpath2);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class FileHandling
{
	void CopyFile(String Name1, String Path1,String Name2, String Path2)
	{
		
		
		try
		{
			FileWriter fw = new FileWriter(Path2+Name2+".txt",true);
			FileReader fr = new FileReader(Path1+Name1+".txt");
			
			int j=0;
			while ((j = fr.read()) != -1)
			{
				fw.write((char)j);
				
			}
			fr.close();
			fw.close();
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		System.out.println("Data is copied sucessfully");
	}
}