/*������ "��������":
���� ������ ����������: 5000 - 3 , 2000 - 10, 1000 - 3, 500 -9, 200 -10, 100 - 1, 50 -6;
��������� ������ ����� � � �����.
���������� ������� ����� ������� �������� ���� ������. */
#include <iostream> // floor()

using namespace std;


int main() {

	int r5000 = 5000, r2000 = 2000, r1000 = 1000, r500 = 500, r200 = 200, r100 = 100, r50 = 50; //�������� �����
	// ����������� ���������� �����
	cout << "Enter any 7 non-negative numbers" << endl; 
	int five_t, two_t, one_t, five_h, two_h, one_h, fifty;
	cin >> five_t >> two_t>> one_t >> five_h >> two_h >> one_h >> fifty;
	int D = (r5000 * five_t + r2000 * two_t + r1000 * one_t + r500 * five_h + r200 * two_h + r100 * one_h + r50 * fifty);//������
		if (five_t < 0 || two_t < 0 || one_t < 0 || five_h < 0 || two_h < 0 || one_h < 0 || fifty < 0)
	cout << endl << "You have entered a negative number, try again." << endl;
		else
		{
		cout << "Now balance in ATM:" << endl << "5000=" << five_t << " " << "2000=" << two_t << " " << "1000=" << one_t << " " << "500=" << five_h << " " << "200=" << two_h << " " << "100=" << one_h << " " << "50=" << fifty << endl << "The total amount of money = " << D << endl;
		}
	cout << endl << "Enter the desired amount" << endl;
	int money;
	cin >> money;
	
	int cash_0 = 0, cash_1 = 0, cash_2 = 0, cash_3 = 0, cash_4 = 0, cash_5 = 0, cash_6 = 0;
	//��������
	if (D > money && money % r50 != 0) 
	{
		cout << "Sorry, we have no enought money" << endl;
	}
	else 
	{
		//������ 5000 ��������;
		cash_0 = money / r5000;
		if (cash_0 > five_t)
			cash_0 = five_t;
			five_t = five_t - cash_0;
			money = money - cash_0 * r5000;
			cout << "Issued "<< cash_0 * r5000 <<" money. "<<"Nominals: "<< r5000  << ". Left a number of notes: " << five_t<< endl;//TBD...

			//������ 2000 ��������;
			cash_1 = money / r2000;
			if (cash_1 > two_t)
				cash_1 = two_t;
			two_t = two_t - cash_1;
			money = money - cash_1 * r2000;
			cout << "Issued " << cash_1 * r2000 << " money. " << "Nominals: " << r2000 << ". Left a number of notes: " << two_t << endl;//TBD.

			//������ 1000 ��������;
			cash_2 = money / r1000;
			if (cash_2 > one_t)
				cash_2 = one_t;
			one_t = one_t - cash_2;
			money = money - cash_2 * r1000;
			cout << "Issued " << cash_2 * r1000 << " money. " << "Nominals: " << r1000 << ". Left a number of notes: " << one_t << endl;//TBD.

			//������ 500 ��������;
			cash_3 = money / r500;
			if (cash_3 > five_h)
				cash_3 = five_h;
			five_h = five_h - cash_3;
			money = money - cash_3 * r500;
			cout << "Issued " << cash_3 * r500 << " money. " << "Nominals: " << r500 << ". Left a number of notes: " << five_h << endl;//TBD.

			//������ 200 ��������;
			cash_4 = money / r200;
			if (cash_4 > two_h)
				cash_4 = two_h;
			two_h = two_h - cash_4;
			money = money - cash_4 * r200;
			cout << "Issued " << cash_4 * r200 << " money. " << "Nominals: " << r200 << ". Left a number of notes: " << two_h << endl;//TBD.

			//������ 100 ��������;
			cash_5 = money / r100;
			if (cash_5 > one_h)
				cash_5 = one_h;
			one_h = one_h - cash_5;
			money = money - cash_5 * r100;
			cout << "Issued " << cash_5 * r100 << " money. " << "Nominals: " << r100 << ". Left a number of notes: " << one_h << endl;//TBD

			//������ 50 ��������;
			cash_6 = money / r50;
			if (cash_6 > fifty)
				cash_6 = fifty;
			fifty = fifty - cash_6;
			money = money - cash_6 * r50;
			cout << "Issued " << cash_6 * r50 << " money. " << "Nominals: " << r50 << ". Left a number of notes: " << fifty << endl;//TBD
	}
		
		
			
		return 0;
}
/*int money;
	cin >> money;
	//�������� money
	if (money<0 || money>D || money%50!=0)
		cout << "Try again. Insufficient funds." << endl << "Needed also money = " << money-D << endl;*/
		/*else {
		if (money > 0 || money % 50 = 0 || five_t > 0)

		}
	return 0;
		}

	/*int moneychek(int money);
	{
		if ((int money)<0); {
			cout << endl << "You have entered a negative number, try again." << endl;
		}
			else {
			if (money > D || D % money != 0); {
				cout << endl << "Try again next time. Insufficient funds." << endl;
				}
				else
					cout << endl << "Please, take your money" << endl;

			}

		return 0;
	}

	int five_tchek(int five_t);
	{
		if (five_t < 0);
	cout << endl<< "You have entered a negative number, try again." << endl;
		return 0;
	}

	int two_tchek(int two_t);
	{
		if (two_t < 0);
		cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}

	int one_tchek(int one_t);
	{
		if (one_t < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
	return 0;
		return 0;
	}

	int five_hchek(int five_h);
	{
		if (five_h < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
	return 0;
		return 0;
	}

	int two_hchek(int two_h);
	{
		if (two_h < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}

	int one_hchek(int one_h);
	{
		if (one_h < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}

	int fiftychek(int fifty);
	{
		if (fifty < 0);
	cout << endl << "You have entered a negative number, try again." << endl;
		return 0;
	}

	*/




