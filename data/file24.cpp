#include<iostream>
using namespace std;
class electricity
{
private:
string id;
string name;
int units;
public:
void getdetails()
{
cout<<"ENTER CUSTOMER ID : ";
cin>>id;
fflush(stdin);
cout<<"ENTER CUSTOMER NAME : ";
getline(cin,name);
cout<<"ENTER UNITS CONSUMED : ";
cin>>units;
}
void displaydetails()
{
cout<<endl<<endl;
cout<<"CUSTOMER ID : "<<id<<endl;
cout<<"CUSTOMER NAME : "<<name<<endl;
cout<<"UNITS CONSUMED : "<<units<<endl;
cout<<"TOTAL BILL : "<<totalbill();
}
float totalbill()
{
float bill=200; // TAKING 200 AS FIXED ENERGY
if(units<1600)
{
bill+=units*7; // TAKING PER UNIT COST TO BE RS 7
}
else
{
bill+=units*10; // FLAT RATE
}
return bill;
}
};
int main()
{
electricity e1;
e1.getdetails();
e1.displaydetails();
return 0;
}