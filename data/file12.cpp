#include <iostream>
using namespace std;
int count = 0;
class String
{
    char *s;
    int size;

public:
    String()
    {
        count++;
        cout << "default constructor" << count << endl;
    }
    ~String()
    {
        cout << "destructor called" << count << endl;
        count--;
    }
    String(char *s, int size)
    {
        this->s = s;
        this->size = size;
        count++;
        cout << "parameterised constructor called for " << count <<endl;
    }
    String(String &a)
    {
        s = a.s;
        size = a.size;
        count++;
        cout << "copy constructor is called for " << count <<endl;
    }
    void dispaly()
    {
        cout << "string is : " << s;
    }
};
int main()
{
    String a("someone else", 12);
    a.dispaly();
    cout << endl;
    String b(a);
    b.dispaly();
    cout << endl;
    String c;
    return 0;
}
