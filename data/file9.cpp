#include<iostream>
using namespace std;
int main(){
int row,col,i,j;
cout<<"Enter the number of rows and columns: ";
cin>>row>>col;
int arr[row][col];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>arr[i][j];
}
}
int (*ptr)[col];
ptr= arr;
cout<<"Output Array: "<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cout<<ptr[i][j]<<" ";
}
cout<<endl;
}
return 0;
}