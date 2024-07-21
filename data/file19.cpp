#include<iostream>
using namespace std;
class area{
float l;
float b;
public:
void set_dim(float x,float y){
l=x;
b=y;
}
float get_area(){
return(l*b);
}
};
int main()
{
area obj;
int x,y;
cout<<"enter the l and b of the rectangle: ";
cin>>x>>y;
obj.set_dim(x,y);
cout<<"the req area is "<<obj.get_area();
return 0;
}