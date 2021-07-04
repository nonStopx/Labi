#include <iostream>

using namespace std;

int main()
{
    int a, b, c; float d, x1, x2;
    cout << "Enter a =/= 0: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << a << " * x^2 ";
    if (b > 0)
        cout << "+ " << b << " * y ";
    else
        cout << "- " << b * (-1) << " * y ";
    if (c > 0)
        cout << "+ " << c << " = 0";
    else
        cout << "- " << c * (-1) << " = 0";
    d = b * b - 4 * a * c;
    cout << endl << "D = " << d << endl;
    if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "x = " << x1;
    }
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }
    if (d < 0)
        cout << "Error";
    return 0;
}
