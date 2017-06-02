#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

int main()
{
	string s,t,str="";
	cin >> s >> t;
	int n=s.length();
	for(int i=0;i<n;++i){
		str+=s[n-i-1];
	}
	if(str == t){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
	return 0;	
}