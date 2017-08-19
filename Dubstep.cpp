#include <iostream>

using namespace std;

int main() {
	string s1;
	cin >> s1;

	for(int i=0;i<s1.length();++i) {
		if(s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B' && i!=0){
			s1=s1.substr(0,i)+" "+s1.substr(i+3);
			i=-1;
		}
		else if(s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B'){
			s1=s1.substr(0,i)+s1.substr(i+3);
			i=-1;
		}
	}
	cout << s1 << endl;
}