#include<iostream>
using namespace std;
class rectangle
{
private:
float length;
float breadth;
public:
void getdimensions()
{
cout<<"ENTER LENGTH : ";
cin>>length;
cout<<"ENTER BREADTH : ";
cin>>breadth;
}
float area()
{
return (length*breadth);
}
}rectangle r1;
r1.getdimensions();
cout<<"AREA : "<<r1.area();
return 0;
}