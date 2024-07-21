#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

int hashFn(int key)
    {
        return key % 9;
    }

class hash_table
{
    int table[TABLE_SIZE];

public:

    hash_table()
    {
        int i = 0;
        for(i = 0; i < TABLE_SIZE; i++)
        {
            table[i] = 0;
        }
    }

    void insertElement(int key)
    {
        int hashCode = hashFn(key);
        while(table[hashCode] != 0)
        {
            hashCode = (hashCode + 1) % 9;
        }
        if( table[hashCode] == 0)
        {
            table[hashCode] = key;
        }
    }

    void displayHashTable()
    {
        int i = 0;
        for(i = 0; i < TABLE_SIZE; i++)
        {
            cout<<"Index "<<i<<" -> "<<table[i] << endl;
        }
    }
};
int main()
{
    int studentIds[] = {14, 18, 24, 20, 3, 23, 33, 15};
    cout<<"The values are: ";
    int i = 0;
    hash_table HT;
    for(i = 0; i < 8; i++)
    {
        cout << studentIds[i] << " ";
        HT.insertElement(studentIds[i]);
    }
    cout<<endl << endl;
    cout << "The hash table is: " << endl;
    HT.displayHashTable();
    return 0;
}

