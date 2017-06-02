#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr;
	int your_sum=0,total_sum=0;
	for(int i=0;i<n;++i){
		int a;
		cin >> a;
		arr.push_back(a);
		total_sum+=a;
	}
	sort(arr.rbegin(),arr.rend());
	int ans=0;
	while(your_sum <= total_sum){
		your_sum+=arr[ans];
		total_sum-=arr[ans];
		++ans;
	}
	cout << ans << endl;
	return 0;
}