#include<iostream>
using namespace std;
class a{
private:
int enroll_number;
string name;
string branch;
float cgpa;
public:
a(int x,string s,string t,float u){
enroll_number=x;
name=s;
branch=t;
cgpa=u;
}
a(int x,string s,float c,string t="CSE"){
enroll_number=x;
name=s;
cgpa=c;
branch=t;
}
a(int x=1,float c=6,string n="unknown",string b="CSE"){
enroll_number=x;
name=n;
branch=b;
cgpa=c;
}
float set_cgpa(float x){
cgpa=x;
}
floatreturn cgpa;
}
};
int main()
{
a obj1(2212,"aman","cse",9.8);
a obj2(2213,"prem",9.6);
a obj3(2214,9.7);
cout<<"the cgpa of obj 1 are : "<<obj1.get_cgpa()<<endl;
cout<<"the cgpa of obj 2 are : "<<obj2.get_cgpa()<<endl;
cout<<"the cgpa of obj 3 are : "<<obj3.get_cgpa()<<endl;
obj1.set_cgpa(9.9);
obj2.set_cgpa(9.3);
obj3.set_cgpa(10);
cout<<"the updated cgpa of obj 1 are : "<<obj1.get_cgpa()<<endl;
cout<<"the updated cgpa of obj 2 are : "<<obj2.get_cgpa()<<endl;
cout<<"the updated cgpa of obj 3 are : "<<obj3.get_cgpa()<<endl;
return 0;
};