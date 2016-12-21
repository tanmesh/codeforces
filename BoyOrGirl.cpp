#include <iostream>
#include <string.h>
#include <cstring>
#include <set>
#include <vector>

using namespace std;
string using_set(string s){
	int n=s.length();
	string str="";
	for(int i=0;i<n;++i){
		int cnt=0;
		for(int j=0;j<str.length();++j){
			if(s[i]==str[j]){
				++cnt;
			}
		}
		if(cnt==0){
			str+=s[i];
		}
	}
	return str;

}
int main()
{
	string s;
	cin >> s;
	s=using_set(s);
	int n=s.length();
	if(n%2==0){
		cout << "CHAT WITH HER!" <<endl;
	}
	else{
		cout << "IGNORE HIM!" << endl;
	}
	return 0;

}