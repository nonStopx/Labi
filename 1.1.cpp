#include <iostream>

using namespace std;

int main()
{
	int a[10];
	cout << "Enter array:" << endl;
	for (int i = 0; i < 10; i++)    
		cin >> a[i];
	cout << endl;
	cout << "Your array:" << endl; 
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++)  
	{
		if ((a[i] % 2) == 0)
			a[i] = 0;
	}
	cout << "Changed array:" << endl; 
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;

}