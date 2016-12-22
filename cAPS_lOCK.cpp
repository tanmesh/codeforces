#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <set>

using namespace std;
bool check_condition(string s){
	int n=s.length(),cnt=0;
	for(int i=1;i<n;++i){
		if(s[i]<'a'){
			++cnt;;
		}
	}
	if(cnt == s.length()-1){
		return true;
	}
	return false;
}
int main()
{
	string s;
	cin >> s;
	int n=s.length();
	if(check_condition(s)){
		for(int i=0;i<n;++i){
			if(s[i]<'a'){
				s[i]=s[i]+32;
				continue;
			}
			if(s[i]>='a'){
				s[i]=s[i]-32;
				continue;
			}
		}
	}
	cout << s << endl;
	return 0;	
}