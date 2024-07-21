#include <iostream>
using namespace std;
int main()
{
int *p;
float *p1;
p=new int;
p1=new float;
cout<<"Enter values of both variables=";
cin>> *p>> *p1;
cout<<"The numbers are "<< *p<<" and "<< *p1;
delete p;
delete p1;
cout<<endl;
cout<<"The numbers are "<< *p<<" and "<< *p1;
return 0;
}
