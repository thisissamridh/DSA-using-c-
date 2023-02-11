#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
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

    int array[6] = {3, 1, 2, 7, 11, 8};
    printArray(array, 6);
    swapAlternate(array, 6);
    printArray(array, 6);

    return 0;
}