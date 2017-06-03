#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

using namespace std;

int main(){
	long long int n,k;
	cin >> n >> k;
	vector<int> a;
	for(int i=0;i<n;++i){
		int b;
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	long long int min = 0,ans=0;
	for(int i=1;i<n;++i){
		if((a[i]-a[min])%k == 0){
			ans+=(a[i]-a[min])/k;
		}
		else{
			cout << "-1\n";
			exit(0);
		}
	}
	cout << ans << endl;
	return 0;
}