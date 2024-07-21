#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 2)
        return n;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int fact = fact(n);
    cout << "fact is: " << fact;
    return 0;
}
