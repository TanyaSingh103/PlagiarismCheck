#include<bits/stdc++.h>
using namespace std;

int main(){

    int myArr[2][2][2];

    cout<<"Enter the array ";

    for(int x = 0; x<2; x++){
        for(int y = 0; y<2; y++){
            for(int z = 0; z<2; z++){
                cout<<"element ["<<x<<"]["<<y<<"]["<<z<<"] : ";
                cin>>myArr[x][y][z];
            }
        }
    }

    for(int x = 0; x<2; x++){
        for(int y = 0; y<2; y++){
            for(int z = 0; z<2; z++){
                cout<<"The value of element ["<<x<<"]["<<y<<"]["<<z<<"] is : "<<myArr[x][y][z];
                 cout<<"and the address of element ["<<x<<"]["<<y<<"]["<<z<<"] is : "<<&(myArr[x][y][z])<<endl;
            }
        }
    }



    return 0;
}
