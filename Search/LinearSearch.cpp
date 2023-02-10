#include <iostream>
using namespace std;

bool search(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {

            return 1;
        }
    }
    return 0;
}

int main()
{

    int array[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key;
    cout << "Enter the key: ";
    cin >> key;
    bool found = search(array, 10, key);
    if (found)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not present";
    }
    return 0;
}