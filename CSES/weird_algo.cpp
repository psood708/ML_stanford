#include <iostream>

using namespace std;

int main()
{
    long int a;
    cin >> a;
    cout << a;
    while (a != 1)
    {
        if (a % 2 == 0)
        {
            a /= 2;
            cout << " " << a;
        }
        else
        {
            a *= 3;
            a += 1;
            cout << " " << a;
        }
    }
}