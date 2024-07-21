#include <iostream>
using namespace std;
int count = 0;
class String
{
    char *s;
    int size;

public:
    String(char *s, int size)
    {
        this->s = s;
        this->size = size;
        count++;
        cout << "parameterised constructor is called for " << count << " object
                                                                       "<<endl;
    }
    String(String &s1)
    {
        s = s1.s;
        size = s1.size;
        count++;
        cout << "copy constructor is called for " << count << " object
                                                              "<<endl;
    }
    String()
    {
        count++;
        cout << "default constructor for object " << count << endl;
    }
    ~String()
    {
        cout << "destructor is called for object " << count << endl;
        count--;
    }
    void dispaly()
    {
        cout << "the string is : " << s;
    }
};
int main()
{
    String s1("aman singh", 10);
    String s2(s1);
    s1.dispaly();
    cout << endl;
    s2.dispaly();
    cout << endl;
    {
        String s3;
        cout << "to show destructor." << endl;
    }
    return 0;
}
