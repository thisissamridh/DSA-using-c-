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

    //  initialising a second array
    int second[3] = {5, 7, 11};

    // accessing an element in the array
    cout << "value at 2rd index: " << second[2] << endl;

    cout << "value at 15 location: " << number[15] << endl;
    cout << "value at 10 location: " << number[10] << endl;
    cout << "value at 43 location: " << number[43] << endl;

    int third[15] = {2, 4, 6};

    for (int i = 0; i < sizeof(third); i++)
    {
        cout << third[i] << " ";
    }

    int fifth[10] = {1, 2};
    int fifthSize = sizeof(fifth) / sizeof(int);

    cout << "fith size of : " << sizeof(fifth) << endl;
    cout << "fitfth size : " << fifthSize << endl;
    cout << "fitfth size : " << 2 / sizeof(int) << endl;

    return 0;
}
