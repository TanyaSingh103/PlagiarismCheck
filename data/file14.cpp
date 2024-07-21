#include<iostream>
#include<math.h>
using namespace std;
 class triangle
 {
 private :
    int s1,s2,s3;
 public :
void setdata(int x,int y,int z)
     {
         s1=x;
         s2=y;
         s3=z;
     }

    void area()
    {
        float s,a;
        s = (s1+s2+s3)/2;
        a = sqrt(s*(s-s1)*(s-s2)*(s-s3));

        cout<<"area of triangle having sides"<<s1<<" "<<s2<<"and"<<s3<<": "<<a<<endl;
    }
    void perimeter()
    {
        float p;
        p=s1+s2+s3;
        cout<<"area of triangle having sides"<<s1<<" "<<s2<<"and"<<s3<<": "<<p<<endl;

    }

 };

int main ()
{
    triangle t1;
t1.setdata(3,4,5);
    t1.area();
    t1.perimeter();

return 0;
}
