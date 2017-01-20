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

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a[n],max=-1;
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	int ans=0;
	for(int i=0;i<n;++i){
		ans+=abs(a[i]-max);
	}
	cout << ans << endl;

}