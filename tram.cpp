#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n,capa=0,max=-1;
	cin >>n;
	for(int i=0;i<n;++i){
		int a,b;
		cin >> a >> b;
		capa+=-a+b;
		if(max < capa){
			max = capa;
		}
	}
	cout << max << endl;
	return 0;
}