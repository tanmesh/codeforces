#include <iostream>
#include <stdbool.h>

using namespace std;

bool cmp(int n) {
	int cnt = 0;
	for(int i=2; i<n; ++i) {
		if(n%i == 0) {
			++cnt;
		}
	}
	if(cnt == 0) {
		return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for(int i=1; i<n; ++i) {
		if(cmp(i) && cmp(n-i)){
			cout << i << " " << n-i << endl;
			return 0;
		}
	}
	return 0;
}