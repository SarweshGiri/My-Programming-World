// OOPs C++	Practical 7                           (File Handling)
/*Q. Write a program to store the information of about 5 students in a file and read the contents and print them on screen*/
//Submitted by : Sarwesh Giri (19BCS4603)                                 Submitted to : Pooja Ma'am ; 
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	system("cls");
	ofstream fout("student",ios::out);  //connect student file to output stream fout
	char name[30],ch;
	float marks=0.0;
	//loop to get 5 records
	for(int i=0;i<5;i++)
	{
		cout<<"Student "<<(i+1)<<":\tName : ";
		cin.get(name,30);
		cout<<"\t\tMarks : ";
		cin>>marks;
		cin.get(ch);                   //to empty input buffer
		fout<<name<<'\n'<<marks<<'\n';
	}
	fout.close();                      //disconnect student file from fout 
	ifstream fin("student ",ios::in);  //connect student file to input stream fin
	fin.seekg(0);                      //to bring the pointer at the file beginning 
	cout<<"\n";
	for(int i=0;i<5;i++)                  //Loop to display record 
	{
		fin.get(name,30);             //read name from file student
		fin.get(ch);
		fin>>marks;                   //read marks from file student 
		fin.get(ch);
		cout<<"Student Name : "<<name;
		cout<<"\tMarks : "<<marks<<"\n";
	}   
	fin.close();                       //disconnect student file from fin
	return 0;
}
