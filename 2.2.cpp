#include <iostream>

using namespace std;

int main()
{
    int a, b, x;
    cout << "A: ";
    cin >> a;
    cout << endl;
    cout << "B: ";
    cin >> b;
    cout << endl;
    x = a + rand() % (b - a + 1);
    cout << x;
    return 0;
}
