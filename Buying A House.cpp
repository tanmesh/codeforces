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

using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >>k;
	int arr[n];
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	--m;
	int left_ans=0,right_ans=0;
	for(int i=m-1;i>=0;--i){
		if(arr[i]!= 0 && arr[i]<=k){
			left_ans=(m-i)*10;
			break;
		}
	}
	for(int i=m+1;i<n;++i){
		if(arr[i]!=0 && arr[i]<=k){
			right_ans=(i-m)*10;
			break;
		}
	}
	if(left_ans!=0 && right_ans!=0){
		cout << min(left_ans,right_ans) << endl;
		exit(0);
	}
	if(left_ans==0){
		cout << right_ans << endl;
		exit(0);	
	} 
	if(right_ans==0){
		cout << left_ans << endl;
	}
	return 0;
}