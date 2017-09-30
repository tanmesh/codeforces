#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int i=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}