/*Задача "Банкомат":
Дано купюры номиналами: 5000 - 3 , 2000 - 10, 1000 - 3, 500 -9, 200 -10, 100 - 1, 50 -6;
Требуется выдать сумму в Х денег.
Определить сколько купюр каждого номинала надо выдать. */

#include <iostream> // floor()

using namespace std;

/*int moneychek(int money);
int five_tchek(int five_t);
int two_tchek(int two_t);
int one_tchek(int one_t);
int five_hchek(int five_h);
int two_hchek(int two_h);
int one_hchek(int one_h);
int fiftychek(int fifty);*/

int main() {
	cout << "Enter any 7 non-negative numbers" << endl;
	int five_t, two_t, one_t, five_h, two_h, one_h, fifty;
	cin >> five_t, two_t, one_t, five_h, two_h, one_h, fifty;
	cout << endl<< "Enter the desired amount" << endl;
	int money;
	cin >> money;	

	
	






	int moneychek(int money) {
		if (money < 0);
		cout << endl << "You have entered a negative number, try again." << endl;

		return 0;
	}

	int five_tchek(int five_t) {
		if (five_t < 0);
	cout << endl<< "You have entered a negative number, try again." << endl;
		return 0;
	}
	
	int two_tchek(int two_t) {
		if (two_t < 0);
		cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}

	int one_tchek(int one_t)
	{if (one_t < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
	return 0;
		return 0;
	}

	int five_hchek(int five_h)
	{if (five_h < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
	return 0;
		return 0;
	}

	int two_hchek(int two_h)
	{if (two_h < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}
	
	int one_hchek(int one_h)
	{if (one_h < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}

	int fiftychek(int fifty)
	{if (fifty < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}
	
	
	
	return 0;
}



