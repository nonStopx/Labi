#include <iostream>

using namespace std;

int main()
{
    float* a, * a_copy;
    int n, m = 0, j = 0;
    cout << "Size of array: ";
    cin >> n;
    a = new float[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
            m++;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    a_copy = new float[m];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            a_copy[j] = a[i];
            j++;
        }

    }
    cout << endl;
    for (int i = 0; i < j; i++)
        cout << a_copy[i] << " ";
    delete[]a;
    return 0;
}
