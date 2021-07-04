#include <iostream>
#include <iomanip>

using namespace std;

int max()
{
    int a, b, c, max;

    cout << "Enter A: ";
    cin >> a;
    cout << endl;

    cout << "Enter B: ";
    cin >> b;
    cout << endl;

    cout << "Enter C: ";
    cin >> c;
    cout << endl;

    max = a;

    if (a < b)
        max = b;
    if (max > c)
        return max;
    if (max < c)
    {
        max = c;
        return max;
    }
}

//----------------------------------

int limit(int x)
{
    int low_l, upp_l;
    cout << "Enter lower limit: ";
    cin >> low_l;
    cout << endl;

    cout << "Enter upper limit: ";
    cin >> upp_l;
    cout << endl;

    if ((x >= low_l) && (x <= upp_l))
        return 0;
    else
        return 1;
}

//----------------------------------

int chng_num()
{
    int x;
    cout << "Enter another number: ";
    cin >> x;
    return x;
}

//----------------------------------

int menu(int(*f_poin_c)(int), int n)
{
    int oper_n = 0, z;
    cout << "Enter operation number:\n" <<
        "1 - Enter lower and upper limit\n" <<
        "2 - Change entered number\n" <<
        "3 - Exit menu\n" <<
        "4 - Exit\n\n";
    do
    {
        cout << "?\n";
        cin >> oper_n;
        if ((oper_n < 1) || (oper_n > 4))
            cout << "Error." << endl;
        do
        {
            switch (oper_n)
            {
            case 1:
                if (f_poin_c(n) == 0)
                    break;
                else
                    oper_n = 2;
            }
            break;
        } while ((oper_n != 3) && (oper_n != 4));

        do
        {
            switch (oper_n)
            {
            case 2:
                n = chng_num();
                break;
            }
            break;
        } while ((oper_n != 3) && (oper_n != 4));

        do
        {
            switch (oper_n)
            {
            case 4:
                exit(0);
            }
            break;
        } while ((oper_n != 3) && (oper_n != 4));
    } while ((oper_n != 3) && (oper_n != 4));
    return n;
}

//----------------------------------

void insert_sort(float* arr, int n1)
{
    int key = 0;
    int x = 0;
    for (int y = 1; y < n1; y++)
    {
        key = arr[y];
        x = y - 1;
        while (x >= 0 && arr[x] > key)
        {
            arr[x + 1] = arr[x];
            x = x - 1;
            arr[x + 1] = key;
        }
    }
}

//----------------------------------

int main()
{
    int a;
    int (*f_poin)(int a);
    f_poin = limit;
    cout << max() << endl << endl;
    cout << "A = ";
    cin >> a;
    menu(f_poin, a);

    int n = 10;
    float* arr = new float[n];
    cout << "Array:" << endl;
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;
    for (int i = 0; i < n; i++)
        cout << setw(10) << arr[i];
    cout << endl << endl;
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        insert_sort(arr, n);
        cout << setw(10) << arr[i];
    }
    cout << endl << endl;
    delete[] arr;

    return 0;
}
