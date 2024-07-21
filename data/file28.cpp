#include <iostream>
using namespace std;

const int TSIZE = 10;

int getHashCode(int key)
    {
        return key % 7;
    }

class hash_table
{
    int table[TSIZE];

public:

    hash_table()
    {
        int i = 0;
        for(i = 0; i < TSIZE; i++)
        {
            table[i] = 0;
        }
    }

    void insert(int key)
    {
        int hashCode = getHashCode(key);
        while(table[hashCode] != 0)
        {
            hashCode = (hashCode + 1) % 9;
        }
        if( table[hashCode] == 0)
        {
            table[hashCode] = key;
        }
    }

    void display()
    {
        int i = 0;
        for(i = 0; i < TSIZE; i++)
        {
            cout<<"Index "<<i<<" -> "<<table[i] << endl;
        }
    }
};
int main()
{
    int IDs[] = {14, 18, 24, 20, 3, 23, 33, 15};
    cout<<"Values are: ";
    int i = 0;
    hash_table HT;
    for(i = 0; i < 8; i++)
    {
        cout << IDs[i] << " ";
        HT.insert(IDs[i]);
    }
    cout<<endl << endl;
    cout << "Hash table is: " << endl;
    HT.display();
    return 0;
}

