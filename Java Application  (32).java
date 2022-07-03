// Write a program to accept directory name from user and write data of all files from that directory into one newly created file named as "marvellous.txt"

import java.lang.*;
import java.io.*;

class Assignment42_5
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
			obj.Packer(Fname,Fpath);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}

class FileHandling
{
	void Packer(String Name, String Path)
	{
		try
		{
			String [] FileList;
		
			File Dir = new File(Path+Name);
			
			FileWriter fw= new FileWriter("C:\\Users\\Admin\\Desktop\\Marvellous.txt",true);
			
			FileList=Dir.list();
			
			if(FileList==null)
			{
				System.out.println( "Either dir does not exist or is not a directory");
			}
			else
			{
				for(int i=0; i<FileList.length;i++)
				{
					FileReader fr =new FileReader(Path+Name+"\\"+FileList[i]);
					File Dir1 = new File(Path+Name+"\\"+FileList[i]);
					int j=0;
					boolean bret=Dir1.isFile();
					if(bret==true)
					{
						while((j=fr.read())!=-1)
						{
							fw.write((char)j);
						}
					}
					
				}
			}
		
			fw.close();
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
		System.out.println("Data is updated sucessfully in Marvellous.txt");
	}
}