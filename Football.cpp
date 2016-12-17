#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	// int cnt=0,max=-1;
	// for(int i=0;i+1<s.length();++i){
	// 	if(max<cnt){
	// 		max=cnt;
	// 	}
	// 	if(s[i]=='0' && s[i+1]=='0'){
	// 		++cnt;
	// 	}
	// 	else{
	// 		cnt=0;
	// 	}
	// }
	// if(max<cnt){
	// 	max=cnt;
	// }
	// ++max;
	// if(max>=7){
	// 	cout << "YES"<< endl;
	// 	exit(0);
	// }
	// max=-1,cnt=0;
	// for(int i=0;i+1<s.length();++i){
	// 	if(max<cnt){
	// 		max=cnt;
	// 	}
	// 	if(s[i]=='1' && s[i+1]=='1'){
	// 		++cnt;
	// 	}
	// 	else{
	// 		cnt=0;
	// 	}
	// }
	// if(max<cnt){
	// 	max=cnt;
	// }
	// ++max;
	// if(max>=7){
	// 	cout << "YES"<< endl;
	// 	exit(0);
	// }
	// cout << "NO" << endl;

	
	int zero_count=0, one_count=0;
	int tmp_zero_count=0, tmp_one_count=0;
	if(s[0]=='0') {
		tmp_zero_count++;
	}
	else {
		tmp_one_count++;
	}
	for(int i=1;i<s.length();++i){
			if(s[i]=='0' && s[i-1]=='1') {
				one_count=max(one_count, tmp_one_count);
				tmp_one_count=0;
			}
			if(s[i]=='1' && s[i-1]=='0') {
				zero_count=max(zero_count, tmp_zero_count);
				tmp_zero_count=0;
			}

			if(s[i]=='0') {
				tmp_zero_count++;
			}
			else{
				tmp_one_count++;
			}
	}
	one_count=max(one_count, tmp_one_count);
	zero_count=max(zero_count, tmp_zero_count);
	
	if(one_count>=7 || zero_count>=7) {
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}

}