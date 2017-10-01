#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string n, m;
	cin >> n >> m;

	for(int i=0; i<n.length(); ++i) {
		if(n[i] == m[i]) {
			n[i] = '0';
		}
		else{
			n[i] = '1';
		}
		cout << n[i];
	}
	cout << endl;
	return 0;
}