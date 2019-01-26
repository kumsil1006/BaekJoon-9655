#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool sang = false; // 상근
	bool chang = false; // 창영
	while (1) {
		if (n > 3) {
			n -= 3;
		} // 남은 돌이 3개 이상이면 3개를 가져감
		else
			n--; // 3개 이하이면 1개를 가져감

		if (sang == false) {
			sang = true;
			chang = false; // 상근이가 가져간 상황 표현
		}
		else {
			sang = false;
			chang = true; // 창영이가 가져간 상황 표현
		}
		if (n == 0) {
			if (sang == true)
				cout << "SK" << endl;
			else
				cout << "CY" << endl;

			return 0;
		} // 돌이 0개가 되었을 때 true인 사람이 마지막으로 가져간 사람이므로, 상황에 맞게 
	}

}
