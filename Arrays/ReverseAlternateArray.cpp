#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int array[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(array[i], array[i + 1]);
        }
    }
}
int main()
{

    int array[6] = {3, 1, 2, 7, 11, 8}; // even
    int odd[6] = {3, 2, 7, 11, 8};      // odd

    cout << "printing the even array" << endl;
    printArray(array, 6);
    swapAlternate(array, 6);
    printArray(array, 6);
    cout << "printing the odd array" << endl;
    printArray(odd, 6);
    swapAlternate(odd, 6);
    printArray(odd, 6);

    return 0;
}