#include <stdio.h>
#include <cstring>
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
string numTOstring(int n){
	string s="";
	while(n>0){
		int last = n%10;
		s=(char)(last+'0')+s;
		n/=10;
	}
	return s;
}

int main()
{
	int n;
	cin>>n; 
	string s[100];
	for(int i=0;i<n;++i){
		cin>>s[i];
		int l=s[i].length();
		if(l>10){
			s[i]=s[i][0] + numTOstring(l-2) + s[i][l-1];
		}
	}
	for(int i=0;i<n;++i){
		cout<<s[i]<<endl;
	}
	return 0;
}