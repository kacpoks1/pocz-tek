#include <iostream>

using namespace std;

int main()
{
	const int table_size = 20;
	int table[table_size];
	char i;
	int zmienna;
	char op;

	for (i = 0; i < table_size; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe, aby przerwac podaj 0  " << endl;

		cin >> zmienna;

		if (zmienna == 0)
		{
			break;
		}
		else
		{
			table[i] = zmienna;
		}
	}

	cout << "podaj operacje" << endl;
	cin >> op;

	switch (op)
	{
	case '+':
	{
		int wynik = 0;
		for (int j = 0; j < i; j++)
		{
			wynik += table[j];
		}
		cout << "wynik operacji " << op << ": " << wynik << endl;
		break;
	}
	
	case '-':
	{
		int wynik = table[0];
		for (int j = 1; j < i; j++)  // j to ilosæ liczb w tablicy
		{
			wynik -= table[j++];
		}
		cout << "wynik operacji " << op << ": " << wynik << endl;
		break;
	}
	
	case '*':
	{
		int wynik = table[1];
		for (int j = 0; j < i; j++)
		{
			wynik *= table[j];
		}
		cout << "wynik operacji " << op << ": " << wynik << endl;
		break;
	}

	case '/':
	{
		int wynik = table[1];
		for (int j = 0; j < i; j++)
		{
			wynik /= table[j];
		}
		cout << "wynik operacji " << op << ": " << wynik << endl;
		break;
	}
	
	default:
		cout << "podaj prawidlowy operator: " << endl; // komen
		break;
	}

	
	return 0;
}
