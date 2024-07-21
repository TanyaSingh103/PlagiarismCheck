#include <iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[3];
    cout<<"Enter values of variables=";
    cin>>p[0]>>p[1]>>p[2];
    cout<<"Value after increment"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Value= "<< p[i]<<endl<<"Address= "<<&p[i]<<endl;
    }
    cout<<endl;
    cout<<"Value after decrement"<<endl;
    for(int i=2;i>=0;i--){
        cout<<"Value= "<< p[i]<<endl<<"Address= "<<&p[i]<<endl;
    }
    return 0;
}