#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	int n ,cnt=1, max =1;
	cin >> n;
	int a[n];

	for(int i=0; i<n; ++i) {
		cin >> a[i];
		if(i > 0) {
			if(a[i-1] <= a[i]) {
				++cnt;
				if(max < cnt) {
					max = cnt;
				}
			}
			else{
				cnt = 1;
			}
		}
	}
	cout << max << endl;
	return 0;
}