#include<iostream> using namespace std;
int main()
{ 
    int *ptr1; 
    float *ptr2; 
    ptr1= new int; 
    ptr2= new float; 
    cout<<"Enter the value of first variable: \n"; 
    cin>>*ptr1; 
    cout<<"Enter the value of second variable: \n"; 
    cin>>*ptr2; cout<<"Value of the entered variables: "<<*ptr1<<" "<<*ptr2; 
    delete ptr1; delete ptr2; 
    return 0;
}
