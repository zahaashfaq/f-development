#include<iostream>
using namespace std;
int main()
{
	int a, b, cnt;
	bool flag = 1;
	cnt = 2;
	cout << "Enter a number";
	cin >> a;
	cout << "Enter a number";
	cin >> b;
	while (cnt < a && cnt < b) {
		if (a % cnt == 0 && b % cnt == 0) {
			flag = 0;
		}
		cnt = cnt + 1;
	}
	if (flag) {
		cout << "Cofactor";
	}
	else {
		cout << "Not cofactors";
	}




	cout << endl;
	return 0;

}