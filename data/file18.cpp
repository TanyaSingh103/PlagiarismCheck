#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
 class second
 {
 private :
    int personid;
 public :
     second()
     {
         personid=0;
     }
     second(int x)
     {
         personid=x;
     }
     void printid()
     {
         cout<<"personid : "<<personid<<endl;
     }
 };
int main ()
{
  second obj1,obj2(404);
  cout<<"obj1 ";
  obj1.printid();
  cout<<"obj2 ";
  obj2.printid();

return 0;
}
