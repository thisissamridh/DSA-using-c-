#include <iostream>
using namespace std;

void initialiseAllWithSameValue(int array[], int k, int value)
{
    for (int i = 0; i < k; i++)
    {
        array[i] = value;
    }
}

int main()
{

    int number[50];
    cout << endl
         << "everything is fine" << endl
         << endl;

    cout << "value at 15 location: " << number[15] << endl;

    return 0;
}