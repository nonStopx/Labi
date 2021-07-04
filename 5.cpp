/*Справочник крупнейших транспортных средств 3 категорий: машины, корабли и самолёты.
(машины: длина в метрах, высота в метрах, год постройки, страна)
(корабли: длина в метрах, осадка, название, страна постройки)
(самолеты: размах крыльев, длина, максимальная скорость, максимальная высота полёта).
Меню просмотра списка, отделный вид для каждого объекта. Возможность добавлять и удалять объекты из каждого списка.
Поиск по названию(по подстроке) в каждой категории.
___________________________________________________________________________________________________________________
Работу выполнили студенты группы ПИ 2-2:
Вардаев Г. Г.
Басыров Т. Р.
Корнеев Д. О.
Андруконец Д. Р.
*/

#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

class Cars
{
private:
	string name;
	float length;
	float width;
	string country;
	int year;
	int local_choice;

public:
	Cars(string n = "NULL", float a = 0, float d = 0, string c = "NULL", int y = 0)
	{
		name = n;
		length = a;
		width = d;
		country = c;
		year = y;
	}

	void print()
	{
		cout << "Название: " << name << endl;
		cout << "Длина: " << length << "м" << endl;
		cout << "Ширина: " << width << "м" << endl;
		cout << "Страна: " << country << endl;
		cout << "Год: " << year << endl;
	}

	string getName()
	{
		return name;
	}

	void addItem()
	{
		cout << "Введите название: ";
		cin >> name;
		cout << "Введите длину (м): ";
		cin >> length;
		cout << "Введите ширину (м): ";
		cin >> width;
		cout << "Введите страну: ";
		cin >> country;
		cout << "Введите год: ";
		cin >> year;
	}
};

//---------------------------------------------

class Ships
{
private:
	string name;
	float sediment;
	float length;
	string country;

public:
	Ships(string n = "NULL", float s = 0, float l = 0, string c = "NULL")
	{
		name = n;
		sediment = s;
		length = l;
		country = c;
	}
	string getName()
	{
		return name;
	}
	void addItem()
	{
		cout << "Введите название: ";
		cin >> name;
		cout << "Введите осадку (м): ";
		cin >> sediment;
		cout << "Введите длину (м): ";
		cin >> length;
		cout << "Введите страну: ";
		cin >> country;
	}
	void print()
	{
		cout << "Название: " << name << endl;
		cout << "Осадка: " << sediment << "м" << endl;
		cout << "Длина: " << length << "м" << endl;
		cout << "Страна: " << country << endl;
	}
};

//---------------------------------------------

class Planes
{
private:
	string name;
	float length;
	float wingspan;
	float maxspeed;
	float maxaltitude;

public:
	Planes(string n = "NULL", float h = 0, float w = 0, float mspd = 0, int malt = 0)
	{
		name = n;
		length = h;
		wingspan = w;
		maxspeed = mspd;
	}

	string getName()
	{
		return name;
	}

	void addItem()
	{
		cout << "Введите название: ";
		cin >> name;
		cout << "Введите длину (м): ";
		cin >> length;
		cout << "Введите размах крыльев (м): ";
		cin >> wingspan;
		cout << "Введите максимальную скорость (км/ч): ";
		cin >> maxspeed;
		cout << "Введите максимальную высоту полета (м): ";
		cin >> maxaltitude;
	}

	void print()
	{
		cout << "Название: " << name << endl;
		cout << "Длина: " << length << "м" << endl;
		cout << "Размах крыльев: " << wingspan << "м" << endl;
		cout << "Максимальная скорость: " << maxspeed << "км/м" << endl;
		cout << "Максимальная высота полета: " << maxaltitude << "м" << endl;
	}
};

//---------------------------------------------

class directory
{
private:
	vector<Cars> Cars_obj;
	vector<Ships> Ships_obj;
	vector<Planes> Planes_obj;
	int choice = 0;

public:
	directory() {
		auto_fill();
		start();
	}
	void auto_fill() {
		Cars c1("Баггер 293", 225, 96, "Германия", 1995);
		Cars_obj.push_back(c1);
		Cars c2("Баггер 288", 240, 96, "Германия", 1987);
		Cars_obj.push_back(c2);
		Cars c3("F60", 502, 241, "Германия", 1991);
		Cars_obj.push_back(c3);

		Ships s1("Club Med 2", 5, 187, "Франция");
		Ships_obj.push_back(s1);
		Ships s2("ССВ-33", 7.8, 265, "СССР");
		Ships_obj.push_back(s2);
		Ships s3("USS Enterprise", 10.9, 342, "США");
		Ships_obj.push_back(s3);

		Planes p1("Ан-225", 84, 88.4, 870, 12000);
		Planes_obj.push_back(p1);
		Planes p2("Airbus A340-600", 59.4, 60, 913, 12500);
		Planes_obj.push_back(p2);
	}

	void start()
	{
		system("cls");

		cout << "Выберите необходимый справочник: " << endl;
		cout << "1. Справочник машин" << endl;
		cout << "2. Справочник кораблей" << endl;
		cout << "3. Справочник самолетов" << endl;
		cout << endl << "4. Выход из приложения" << endl;
		cin >> choice;
		if (choice == 4)
			exit(0);
		system("cls");

		showMenu();

	}

	void showMenu()
	{
		cout << endl;
		if (choice)
		{
			int choice2;
			cout << "Выберите необходимое действие: " << endl;
			cout << "1. Показать все записи" << endl;
			cout << "2. Поиск записи по названию" << endl;
			cout << "3. Удаление записи по порядковому номеру" << endl;
			cout << "4. Добавление новой записи" << endl;
			cout << "5. Выход в меню справочника" << endl;
			cin >> choice2;
			get_directory(choice2);
		}
	}

	void get_directory(int ch2)
	{
		if (choice == 1)
		{
			if (ch2 == 1)
			{
				for (int i = 0; i < Cars_obj.size(); i++)
				{
					Cars_obj[i].print();
					cout << endl;
				}
				showMenu();
			}


			else if (ch2 == 2)
			{
				cout << "Введите название для поиска: ";
				string str;
				cin >> str;
				bool test = true;
				for (int i = 0; i < Cars_obj.size(); i++)
				{
					if (Cars_obj[i].getName() == str)
					{
						test = false;
						Cars_obj[i].print();
					}
				}
				if (test)
				{
					cout << "Такой элемент не найден!";
				}
				showMenu();

			}
			else if (ch2 == 3)
			{
				int number;
				cout << "Введите номер для удаления элемента: ";
				cin >> number;
				while (number > Cars_obj.size())
				{
					cout << "Ошибка, введите корректный номер!" << endl;
					cin >> number;
				}
				number--;
				Cars_obj.erase(Cars_obj.begin() + number);
				showMenu();

			}
			else if (ch2 == 4)
			{
				Cars item;
				item.addItem();
				Cars_obj.push_back(item);
				cout << endl << endl;
				showMenu();

			}
			else if (ch2 == 5)
			{
				start();
			}

		}
		if (choice == 2)
		{
			if (ch2 == 1)
			{
				for (int i = 0; i < Ships_obj.size(); i++)
				{
					Ships_obj[i].print();
					cout << endl;
				}
				showMenu();
			}


			else if (ch2 == 2)
			{
				cout << "Введите название для поиска: ";
				string str;
				cin >> str;
				bool test = true;
				for (int i = 0; i < Ships_obj.size(); i++)
				{
					if (Ships_obj[i].getName() == str)
					{
						test = false;
						Ships_obj[i].print();
					}
				}
				if (test)
				{
					cout << "Такой элемент не найден!";
				}
				showMenu();

			}
			else if (ch2 == 3)
			{
				int number;
				cout << "Введите номер для удаления элемента: ";
				cin >> number;
				while (number > Ships_obj.size())
				{
					cout << "Ошибка, введите корректный номер!" << endl;
					cin >> number;
				}
				number--;
				Ships_obj.erase(Ships_obj.begin() + number);
				showMenu();

			}
			else if (ch2 == 4)
			{
				Ships item;
				item.addItem();
				Ships_obj.push_back(item);
				cout << endl << endl;
				showMenu();

			}
			else if (ch2 == 5)
			{
				start();
			}

		}

		if (choice == 3)
		{
			if (ch2 == 1)
			{
				for (int i = 0; i < Planes_obj.size(); i++)
				{
					Planes_obj[i].print();
					cout << endl;
				}
				showMenu();
			}


			else if (ch2 == 2)
			{
				cout << "Введите название для поиска: ";
				string str;
				cin >> str;
				bool test = true;
				for (int i = 0; i < Planes_obj.size(); i++)
				{
					if (Planes_obj[i].getName() == str)
					{
						test = false;
						Planes_obj[i].print();
					}
				}
				if (test)
				{
					cout << "Такой элемент не найден!";
				}
				showMenu();

			}
			else if (ch2 == 3)
			{
				int number;
				cout << "Введите номер для удаления элемента: ";
				cin >> number;
				while (number > Planes_obj.size())
				{
					cout << "Ошибка, введите корректный номер!" << endl;
					cin >> number;
				}
				number--;
				Planes_obj.erase(Planes_obj.begin() + number);
				showMenu();

			}
			else if (ch2 == 4)
			{
				Planes item;
				item.addItem();
				Planes_obj.push_back(item);
				cout << endl << endl;
				showMenu();

			}
			else if (ch2 == 5)
			{
				start();
			}
		}
	}
};

//---------------------------------------------

int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	directory test;

	return 0;
}