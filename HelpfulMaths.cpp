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
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n=s.length();	
	int a[3]={0,0,0};
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			a[0]+=1;
		}
		if(s[i]=='2'){
			a[1]+=1;
		}
		if(s[i]=='3'){
			a[2]+=1;
		}
	}
	int i=0;
	while(a[0] != 0){
		s[i]=(1+'0');
		a[0]=a[0]-1;
		i=i+2;
	}
	while(a[1] != 0){
		s[i]=(2+'0');
		a[1]=a[1]-1;
		i=i+2;
	}
	while(a[2] != 0){
		s[i]=(3+'0');
		a[2]=a[2]-1;
		i=i+2;
	}
	cout << s <<endl;
}