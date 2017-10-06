#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, A=0, D=0;
	cin >> n;
	char ch;
	while(cin >> ch) {
		if(ch == 'A') {
			++A;
		}
		else{
			++D;
		}
	}
	if(A > D) {
		cout << "Anton\n";
		return 0;
	}
	if(A < D) {
		cout << "Danik\n";
		return 0;
	}
	cout << "Friendship\n";
	return 0;
}