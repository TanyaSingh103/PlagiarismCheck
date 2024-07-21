#include<iostream>
using namespace std;
class student
{
private:
int enrollmentno;
string name;
string branch;
float cgpa;
public:
student(int x,string y,string c,float d)
{
enrollmentno=x;
name=y;
branch=c;
cgpa=d;
}
student()
{
enrollmentno=1;
name="Unknown";
branch="CSE";
cgpa=8.9;
}
void display()
{
cout<<"ENROLLMENT NO : "<<enrollmentno<<endl;
cout<<"NAME : "<<name<<endl;
cout<<"BRANCH : "<<branch<<endl;
cout<<"CGPA : "<<cgpa<<endl<<endl;
}
};
int main()
{
student s1(22103179,"SAUMIL GUPTA","CSE",10);
student s2;
s1.display();
s2.displ;
}