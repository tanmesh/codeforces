#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int n;
	char ch1, ch2;
	cin >> n;
	int sf = 0, fs = 0;
	cin >> ch1;
	while(cin >> ch2) {
		if(ch1=='S' && ch2=='F') {
			++sf;
		}
		else if(ch1=='F' && ch2=='S') {
			++fs;
		}
		ch1 = ch2;
	}
	if(sf > fs) {
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	return 0;
}