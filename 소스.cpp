#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool sang = false;
	bool chang = false;
	while (1) {
		if (n > 3) {
			n -= 3;
		}
		else
			n--;

		if (sang == false) {
			sang = true;
			chang = false;
		}
		else {
			sang = false;
			chang = true;
		}
		if (n == 0) {
			if (sang == true)
				cout << "SK" << endl;
			else
				cout << "CY" << endl;

			return 0;
		}
	}

}