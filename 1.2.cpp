#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[3][3]; float d;
    cout << "Enter matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
        cout << "Enter next string" << endl;
    }
    cout << endl << endl << "Your matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << setw(5) << a[i][j];
        cout << endl << endl;;
    }
    d = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1] - a[0][2] * a[1][1] * a[2][0] - a[0][0] * a[1][2] * a[2][1] - a[0][1] * a[1][0] * a[2][2];
    cout << setprecision(4) << d;
    return 0;
}