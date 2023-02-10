#include <iostream>
using namespace std;

void updateArray(int array[], int size)

{
    cout << "going into the function" << endl;
    array[0] = 90;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl
         << "going out of  the function" << endl;
}

int main()
{

    int array[3] = {1, 2, 3};
    updateArray(array, 3);
    cout
        << "the array is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

// array works on pass by reference , here the base address of the array is passed and not the actaul array
// like it happened when we are calling the fucntion