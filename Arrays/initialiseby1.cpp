#include <iostream>
using namespace std;

int main()
{

    int one[10];

    for (int i = 0; i < sizeof(one); i++)
    {
        one[i] = 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << one[i] << "  "<<endl;
    }

    return 0;
}