#include<iostream> #include<math.h> using namespace std; 
 
class triangle {     public:     int a,b,c; 
 
    float area(int a,int b,int c) 
    { 
    float s = (a+b+c)/2.0;     cout<<"Area of triangle is "<< sqrt((s)*(s-a)*(s-b)*(s-c))<<endl; 
} 
    float perimeter(int a,int b,int c) 
    { 
        int perimeter =a+b+c  ;         cout<<"The perimeter of trainagle is "<<perimeter<<endl; 
    } 
};  
int main () 
{ 
    int side1,side2,side3;     cout<<"Enter side of triangle"<<endl;     cin>>side1>>side2>>side3; 
 
    class triangle t; 
    t.area(side1,side2,side3); 
    t.perimeter(side1,side2,side3); } 
