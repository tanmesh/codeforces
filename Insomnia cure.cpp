#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

int main(){
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	k--,l--,m--,n--;
	vector<int> arr;
	for(int i=0;i<d;++i){
		arr.push_back(i+1);
	}
	for(int i=k;i<d;i+=k+1){
		arr[i]=-1;
	}
	for(int i=l;i<d;i+=l+1){
		arr[i]=-1;
	}
	for(int i=m;i<d;i+=m+1){
		arr[i]=-1;
	}
	for(int i=n;i<d;i+=n+1){
		arr[i]=-1;
	}
	int cnt=0;
	for(int i=0;i<d;++i){
		if(arr[i]>0)++cnt;
	}
	cout << d-cnt << endl;

}