#include <iostream>

using namespace std;

int main()
{
    int a[10]; int t = 0;
    for (int i = 0; i < 10; i++)
        a[i] = rand() % 100;
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
