#include <iostream>
#include <ctime>

using namespace std;

int main()
{

	int drink = 0;
	const int coin100 = 100;
	const int coin200 = 200;
	const int coin500 = 500;
	int input;
	int sum = 0;
	int remainder = 0;
	
	const int water = 200;
	const int coffee = 300;
	const int chips = 900;
	int userSelectedItem;
	int selectedItem;


	cout << "Welcome" << endl;

	cout << "avalable items: " << endl << "1 - Water: " << water << endl << "2 - Coffee: " << coffee <<endl << "3 - Chips: " << chips << endl;

	cout << "Please select you item: " << endl;
	cin >> userSelectedItem;
	if (userSelectedItem == 1) {
		selectedItem = water;
	}
	else if(userSelectedItem == 2) {
		selectedItem = coffee;
	}
	else if(userSelectedItem == 3) {
		selectedItem = chips;
	}
	else {
		cout << "Wrong selected item!" << endl;
		return 0;
	}

	cout << "You selected item #" << userSelectedItem << endl;
	cout << "Please input coins of value: " << coin100 << ", " << coin200 << ", " << coin500 << endl;

	while (sum < selectedItem) {
		cout << "Input: ";
		cin >> input;

		if (input == coin100 || input == coin200 || input == coin500) {}
		else {
			cout << "Invalid Input:" << input << endl;
			cout << "Valid inputs are: " << coin100 << ", " << coin200 << ", " << coin500 << endl;
			continue;
		}

		sum = sum + input;
		cout << "Sum: " << sum << endl;
	}
	remainder = sum - selectedItem;
	sum = sum - remainder;
	cout << "Return to user: "<< remainder << endl;
	return 0;
}

