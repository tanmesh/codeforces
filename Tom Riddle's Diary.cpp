#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> s;

	for(int i=0; i<n; ++i) {
		int cnt = 0;
		string str;
		cin >> str;
		s.push_back(str);
		for(int j=0; j<i; ++j) {
			if(s[i] == s[j]) {
				++cnt;
			}
		}
		if(cnt > 0) {
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}
