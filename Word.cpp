#include <iostream>
#include <string>

using namespace std;
string convertAllLarge(string s) {
	for(int i=0; i<s.length(); ++i) {
		if(!(s[i] >='a' && s[i]<='z')){
			s[i]+=32;
		}
	}
	return s;
}

string convertAllSmall(string s) {
	for(int i=0; i<s.length(); ++i) {
		if(s[i] >='a' && s[i]<='z'){
			s[i]-=32;
		}
	}
	return s;
}

int main() {
	string s;
	cin >> s;
	int small=0, large=0;

	for(int i=0; i<s.length(); ++i) {
		if(s[i]>= 'a' && s[i]<='z') {
			++small;
		}
		else{
			++large;
		}
	}
	if(small >= large) {
		s = convertAllLarge(s);
	}
	else{
		s = convertAllSmall(s);
	}
	cout << s << endl;
	return 0;
}