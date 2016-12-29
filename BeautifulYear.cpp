#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>

using namespace std;
bool check(int n){
	int i=0;
	set <int> arr;
	while(n>0){
		++i;
		int last=n%10;
		arr.insert(last);
		n/=10;
	}
	if(arr.size()==i){
		return true;
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	while(1){
		++n;
		if(check(n)){
			cout << n << endl;
			exit(0);
		}
	}
	return 0;	
}