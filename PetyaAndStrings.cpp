#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int n=s1.length(),cnt1=0,cnt2=0;;
	for(int i=0;i<n;++i){
		if(s1[i]<91){
			s1[i]+=32;
		}
		if(s2[i]<91){
			s2[i]+=32;
		}
		cnt1=s1[i];
		cnt2=s2[i];
		int cnt=cnt1-cnt2;
		if(cnt<0){
			cout << -1 << endl;
			exit(0);	
		}
		if(cnt>0){
			cout << 1 << endl;
			exit(0);
		}
	}
	cout << 0 << endl;
	return 0;
}