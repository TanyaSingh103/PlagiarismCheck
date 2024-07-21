#include<iostream>
using namespace std;

int main()
{
    int rows,cols,i,j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of cols: ";
    cin>>cols;
    int matrix[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int (*p)[cols];
    p= matrix;
    cout<<"Output: "<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}