#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,m;
	cin >> n >>m;
	vector<int> f;
	for(int i=0;i<m;++i){
		int a;
		cin >> a;
		f.push_back(a);
	}
	sort(f.begin(),f.end());
	int min=INT_MAX;
	for(int i=0;i<m-n+1;i++){
		if(min > f[i+n-1]-f[i]){
			min = f[i+n-1]-f[i];
		}
	}
	cout << min << endl;
	return 0;
}