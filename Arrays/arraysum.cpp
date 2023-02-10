#include <iostream>
using namespace std;

int sum(int num[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
}

int main()
{
    int size;
    cin >> size;
    int number[100];
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    cout << "sum of the array is: " << sum(number, size) << endl;

    return 0;
}