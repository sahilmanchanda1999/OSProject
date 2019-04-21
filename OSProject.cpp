#include<iostream>							
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Student
{
	bool  resource_pen;
	bool  resource_paper;
	bool  resource_question_paper;
	bool resource_all_resources;
}s1,s2,s3;

void student_process_one()
{
	system("cls");
	s1.resource_all_resources=1;
	s1.resource_paper=1;
	s1.resource_question_paper=1;
	cout<<"----------------------------------\n";
	cout<<"~~Student Process One Completed~~"<<endl;
	cout<<"----------------------------------\n";
}	
void student_process_two()
{
	system("cls");
	s2.resource_all_resources=1;
	s2.resource_pen=1;
	s2.resource_question_paper=1;
	cout<<"----------------------------------\n";
	cout<<"~~Student Process Two Completed~~"<<endl;
	cout<<"----------------------------------\n";
	
}
void student_process_three()
{
	system("cls");
	s3.resource_all_resources=1;
	s3.resource_pen=1;
	s3.resource_paper=1;
	cout<<"----------------------------------\n";
	cout<<"~~Student Process Three Completed~~"<<endl;
	cout<<"----------------------------------\n";
	
}
int main()
{
	
	s1.resource_all_resources=0;
	s1.resource_paper=0;
	s1.resource_pen=0;
	s1.resource_question_paper=0;	
		
	s2.resource_all_resources=0;
	s2.resource_paper=0;
	s2.resource_pen=0;
	s2.resource_question_paper=0;
		
	s3.resource_all_resources=0;
	s3.resource_paper=0;
	s3.resource_pen=0;
	s3.resource_question_paper=0;
	
	do
	{
		cout<<endl;
		int a,b;
		cout<<"1.Pen"<<endl;
		cout<<"2.Paper"<<endl;
		cout<<"3.Question Paper"<<endl;
		cout<<"Select any two items to be placed on the shared table:"<<endl;
		cin>>a>>b;	
		if(a==1 && b==2  && s3.resource_all_resources==1)
		{
			system("cls");
			cout<<"----------------------------------\n";
			cout<<"***Student 3 has already completed his Assignment***"<<endl;
			cout<<"----------------------------------\n";
	
		}
		if(a==2 && b==1  && s3.resource_all_resources==1)
		{
			system("cls");
			cout<<"----------------------------------\n";
			cout<<"***Student 3 has already completed his Assignment***"<<endl;
			cout<<"----------------------------------\n";
	
		}
		if(a==2 && b==3  && s1.resource_all_resources==1)
		{
			system("cls");
			cout<<"----------------------------------\n";
			cout<<"***Student 1 has already completed his Assignment***"<<endl;
			cout<<"----------------------------------\n";
	
		}
		if(a==3 && b==2  && s1.resource_all_resources==1)
		{
			system("cls");
			cout<<"----------------------------------\n";
			cout<<"***Student 1 has already completed his Assignment***"<<endl;
			cout<<"----------------------------------\n";
	
		}
		if(a==1 && b==3  && s2.resource_all_resources==1)
		{
			system("cls");
			cout<<"----------------------------------\n";
			cout<<"***Student 2 has already completed his Assignment***"<<endl;
			cout<<"----------------------------------\n";
	
		}
		if(a==3 && b==1  && s2.resource_all_resources==1)
		{
			
			system("cls");
			cout<<"----------------------------------\n";
			cout<<"***Student 2 has already completed his Assignment***"<<endl;
			cout<<"----------------------------------\n";
	
		}
		if(a==1 && b==2  && s3.resource_all_resources==0)
		{
			
			student_process_three();
		}
		if(a==2 && b==1  && s3.resource_all_resources==0)
		{
			student_process_three();
		}
		if(a==2 && b==3  && s1.resource_all_resources==0)
		{
			student_process_one();
		}
		if(a==3 && b==2  && s1.resource_all_resources==0)
		{
			student_process_one();
		}
		if(a==1 && b==3 && s2.resource_all_resources==0)
		{
			student_process_two();
		}
		if(a==3 && b==1 && s2.resource_all_resources==0)
		{
			student_process_two();
		}
	}
	while(s1.resource_all_resources==0||s2.resource_all_resources==0||s3.resource_all_resources==0);
	cout<<"All Student Processes Completed";
	getch();

}
