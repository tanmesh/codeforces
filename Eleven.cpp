#include <iostream>
#include <string.h>

using namespace std;

bool checkIth(int i, int& a, int& b) {
	int c = a+b;
	if(i == c) {
		a = b;
		b = c;
		return true;
	}
	else{
		return false;
	}
}

int main() {
	int n;
	cin >> n;

	int a = 1, b = 2;
	for(int i=1; i<=n; ++i) {
		if(i == a || i == b || checkIth(i, a, b)) {
			cout << "O";
		}
		else{
			cout << "o";
		}
	}
	cout << endl;

	return 0;
}