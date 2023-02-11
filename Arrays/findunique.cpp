#include <iostream>
using namespace std;
// Function to find the unique element
int findUnique(int arr[], int size)
{
    int res = 0;

    for (int i = 0; i < size; i++)
        res = res ^ arr[i];

    return res;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int unique = findUnique(arr, size);

    cout << "Unique element is: " << unique;
    return 0;
}
