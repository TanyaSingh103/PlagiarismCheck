#include<iostream> using namespace std; 
 
class second 
{          public:     int id;     second()     { 
        id = 12;             cout<<"Using default constructor "<<id<<endl;     }  
    second(int a) 
    {          
        cout<<"Using parameterized constructor"<<a<<endl;  
    } 
};  
int main () 
{ 
    int idm;     cout<<"Enter id no- ";     cin>>idm; 
   
   class second obj1;     class second obj2(idm); 
 
} 
 
