#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(double tmp,double k){
	if(tmp >= k-0.5){
		return true;
	}
	return false;
}

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	double sum=0;
	for(int i=0;i<n;++i){
		cin >> arr[i];
		sum+=arr[i];
	}
	int i=0;
	bool flag = true;
	while(flag){
		double tmp=(sum+i*k)/(n+i);
		if(check(tmp,k)){
			cout << i << endl;
			flag = false;
		}
		++i;
	}
	return 0;
}