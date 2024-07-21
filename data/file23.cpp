return cgpa;
}
};
int main()
{
a obj1(2212,"aman","cse",9.8);
a obj2(2213,"prem",9.6);
a obj3(2214,9.7);
cout<<"the cgpa of obj 1 are : "<<obj1.get_cgpa()<<endl;
cout<<"the cgpa of obj 2 are : "<<obj2.get_cgpa()<<endl;
cout<<"the cgpa of obj 3 are : "<<obj3.get_cgpa()<<endl;
obj1.set_cgpa(9.9);
obj2.set_cgpa(9.3);
obj3.set_cgpa(10);
cout<<"the updated cgpa of obj 1 are : "<<obj1.get_cgpa()<<endl;
cout<<"the updated cgpa of obj 2 are : "<<obj2.get_cgpa()<<endl;
cout<<"the updated cgpa of obj 3 are : "<<obj3.get_cgpa()<<endl;
return 0;
};
9)
#include<iostream>
using namespace std;
class electric_bill{
string name;
int person_id;
int unit_consumed;
public:
electric_bill(string s,int m,int n){
name=s;
person_id=m;
unit_consumed=n;
}
float calc_bill(float unit_cost){
return (unit_consumed*unit_cost);
}
voidcout<<"the bill of person is : "<<calc_bill(unit_cost);
}
};
int main(){
int unit_cost,id,unit_consumed;
string name;
cout<<"enter the per unit cost :"<<endl;
cin>>unit_cost;
cout<<"enter the name :"<<endl;
cin>>name;
cout<<"enter the id :"<<endl;
cin>>id;
cout<<"enter the total unit consumed :"<<endl;
cin>>unit_consumed;
electric_bill obj(name,id,unit_consumed);
obj.calc_bill(unit_cost);
obj.put(unit_cost);
}