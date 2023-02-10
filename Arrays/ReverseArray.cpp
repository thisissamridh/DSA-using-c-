#include <iostream>
using namespace std;

void reverse(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << "  " << endl;
    }
}

int main()
{

    int array[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    reverse(array, 10);
    printArray(array);

    return 0;
}