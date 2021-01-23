#include <iostream>
using namespace std;

int main() {

	// Count digits of a number
	int number;
	cout << "Number: ";
	cin >> number;

	if (number == 0)
		cout << "You have entered 0.\n";
	else {
		if (number < 0)
			number = -1 * number;

		// 1325 (5 gets removed)
		//counter = 1 (increased counter by 1 with each digit removed in the number)
		int counter = 0;
		while (number > 0) {
			//number = number / 10;
			number /= 10;
			counter++;
		}
		cout << "Number contains " << counter << " digit(s)\n";
	}


	system("pause>0");

}