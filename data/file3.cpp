#include<iostream>
using namespace std;
int main()
{
    int *A = new int[3];

    for(int a=0;a<3;a++){
        cout<<"Enter "<<a+1<<" element:";
        cin>>A[a];
    }
    cout<<"--------------------------------"<<endl;
    cout<<"Incrementing the pointer...."<<endl;
    for(int i=0;i<3;i++){
        cout<<"Addresses of A["<<i<<"] is "<<A+i<<endl;
        cout<<"Value of A["<<i<<"] = "<<A[i]<<endl;
    }
    cout<<"--------------------------------"<<endl;
    cout<<"Decrementing the pointer....."<<endl;
    for(int i=2;i>=0;i--){
        cout<<"Addresses of A["<<i<<"] is "<<A+i<<endl;
        cout<<"Value of A["<<i<<"] = "<<A[i]<<endl;
    }

    return 0;
}
