 #include <iostream> using namespace std; class complex 
{ private:     int a;     int b;     int c;     int d; 
 public: 
    void real(int a1 , int a2 );     void imaginary(int b1,int b2);      void sum(complex c1,complex c2);      void difference(complex c1,complex c2);      void product(complex c1,complex c2); 
}; 
int main() 
{     complex c1,c2,c3;     c1.real(6,4);     c2.imaginary(4,3);     c3.sum(c1,c2);     c3.difference(c1,c2);    c3.product(c1,c2); 
  
    return 0; 
} void complex::real(int a1,int b1) 
{  
    a = a1;     b = b1; 
} 
void complex::imaginary(int b1,int b2) 
{     c=b1;    d=b2; 
}  void complex::sum(complex c1,complex c2) 
{ 
 
    a=c1.a+c1.b;     c=c2.c+c2.d;     cout<<"sum of complex number is: "; 
     cout << a << "+i" << c << endl; 
} void complex::difference(complex c1,complex c2){      a=c1.a-c1.b;     c=c2.c-c2.d;     cout<<"difference of complex number is: ";     cout << a << "+i" << c << endl; 
 } void complex::product(complex c1,complex c2){     a=((c1.a*c1.b)-(c2.c*c2.d));     c=((c1.a*c2.d)+(c2.c*c1.b)); 
    cout<<"product of complex number: "; 
     cout << a << "+i" << c << endl;  
} 
