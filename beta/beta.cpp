

#include <iostream>
using namespace std;
int main()
{
	float a, b, x;
	char op;
	cout << "Podaj liczby: " << endl;
	cin >> a >> b;
	cout << "Podaj czynnosc: ";
	cin >> op;





	switch (op)
	{

	case '+': {
		x = a + b;
		cout << x;
	}
			break;
	case '-': {
		x = a - b;
		cout << x;
	}
			break;
	case '*': {

		x = a * b;
		cout << x;
	}
			break;


	case '/': {

		if (a == 0 || b == 0) {

			cout << "Nie dziel przez 0!";

		}
		else {
			x = a / b;
			cout << x;
		}
	}
			break;
	default:
		cout << "podaj prawidlowy operator";

		break;
	}
}
