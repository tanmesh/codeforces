#include <iostream>

using namespace std;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int tmp = n-1, ans = 0;
	char ch = 'r';
	while(tmp > 0) {
		--tmp;
		if(ch == 'r') {
			if(min(a,b) == a) {
				ch = 'o';
				ans += a;
			}
			else{
				ch = 'e';
				ans += b;
			}
		}
		else if(ch == 'o') {
			if(min(a,c) == a) {
				ch = 'r';
				ans += a;
			}
			else{
				ch = 'e';
				ans += c;
			}
		}
		else {
			if(min(c,b) == c) {
				ch = 'o';
				ans += c;
			}
			else{
				ch = 'r';
				ans += b;
			}
		}
	}
	cout << ans << endl;
	return 0;
}