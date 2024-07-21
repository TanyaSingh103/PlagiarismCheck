#include<iostream>
#include<math.h>
using namespace std;
 class complex
 {
 private :
    int x,y;
 public :
     complex(int a,int b)
     {
         x=a;
         y=b;

     }
     void sum(complex c)
     {
         int a,b;
         a=x+c.x;
         b=y+c.y;
         cout<<"sum of complex number : " <<a<<" +("<<b<<")i"<<endl;

     }
     void diff(complex c)
     {
         int a,b;
         a=x-c.x;
         b=y-c.y;
         cout<<"difference of complex number : " <<a<<" +("<<b<<")i"<<endl;
     }
     void multiply(complex c)
     {
        int a,b;
         a=x*c.x -y*c.y;
         b=x*c.y+y*c.x;
         cout<<"multiply of complex number : " <<a<<" +("<<b<<")i"<<endl;
     }

 };

int main ()
{
    complex c1(5,4),c2(3,2);
    c1.sum(c2);
    c1.diff(c2);
    c1.multiply(c2);


return 0;
}
