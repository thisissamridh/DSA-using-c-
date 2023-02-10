#include <iostream>
using namespace std;

int getmaxi(int num[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (num[i] > maxi)
        // {
        //     maxi = num[i];
        // }

        maxi = max(maxi, num[i]);
    }
    return maxi;
}
int getmini(int num[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if (num[i] < mini)
        // {
        //     mini = num[i];
        // }
        mini = min(mini, num[i]);
    }
    return mini;
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

    cout << "maxi value:" << getmaxi(number, size) << endl;
    cout << "mini value:" << getmini(number, size) << endl;

    return 0;
}