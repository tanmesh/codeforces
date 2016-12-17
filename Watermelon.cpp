#include <stdio.h>
#include <stdlib.h>
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
	int n;
	cin>>n;
	for(int i=1;i<n;++i){
		int a=i;
		int b=n-i;
		
		if(a%2==0 && b%2==0){
			cout<<"YES";
			exit(0);
		}
	}
	cout<<"NO"<<endl;
	return 0;
}