#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string s;
	int n;
	cin >> n;
	cin >> s;
	if(n < 26) {
		cout << "NO\n";
		return 0;
	}
	set<char> str;
	for(int i=0; i<n; ++i) {
		if(s[i]>='A' && s[i]<='Z'){
			s[i]+=32;
		}
		str.insert(s[i]);
	}
	if(str.size() == 26) {
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";
	return 0;
}