#include<iostream>
#include<conio.h>
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
	s1.resource_all_resources=1;
	s1.resource_paper=1;
	s1.resource_question_paper=1;
	cout<<"Student Process One Completed"<<endl;
}	
void student_process_two()
{
	s2.resource_all_resources=1;
	s2.resource_pen=1;
	s2.resource_question_paper=1;
	cout<<"Student Process Two Completed"<<endl;
}
void student_process_three()
{
	s3.resource_all_resources=1;
	s3.resource_pen=1;
	s3.resource_paper=1;
	cout<<"Student Process Three Completed"<<endl;
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

}
