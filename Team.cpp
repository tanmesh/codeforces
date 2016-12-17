#include <stdio.h>
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	int n,cnt=0;
	cin >> n;
	for(int i=0;i<n;++i){
		int counter=0;
		for(int j=0;j<3;++j){
			int a;
			cin >> a;
			if(a==1){
				++counter;
			} 
		}
		if(counter>=2){
			++cnt;
		}
	}
	cout << cnt << endl;
	return 0;
}