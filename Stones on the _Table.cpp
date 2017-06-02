#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n,cnt=0;
	string s;
	cin >> n >> s;
	for(int i=0;i+1<n;++i){
		if(s[i] == s[i+1])++cnt;
	}
	cout << cnt << endl;	
}