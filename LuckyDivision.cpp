#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
bool check_lucky(int n){
	int digit=0,cnt=0;
	while(n>0){
		int last=n%10;
		++digit;
		if(last==7 || last==4){
			++cnt;
		}
		n/=10;
	}
	if(cnt == digit){
		return true;
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	if(check_lucky(n)){
		cout << "YES" << endl;
		exit(0);
	}
	for(int i=4;i<n;++i){
		if(n%i==0 && check_lucky(i)){
			cout << "YES" << endl;
			exit(0);
		}
	}
	cout << "NO" << endl;
	return 0;	
}