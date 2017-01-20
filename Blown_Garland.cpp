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
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n=s.length();
	int cntB=0,cntG=0,cntY=0,cntR=0,iR,iB,iG,iY;
	for(int i=0;i<n;++i){
		if(s[i]=='R'){
			iR=i;
		}
		if(s[i]=='Y'){
			iY=i;
		}
		if(s[i]=='G'){
			iG=i;
		}
		if(s[i]=='B'){
			iB=i;
		}
	}
	int ansR=0,ansY=0,ansG=0,ansB=0;
	for(int i=0;i<n;++i){
		if(s[i]!='R' && (iR-i)%4 == 0){
			++ansR;
		}
		if(s[i]!='Y' && (iY-i)%4 == 0){
			++ansY;
		}
		if(s[i]!='G' && (iG-i)%4 == 0){
			++ansG;
		}
		if(s[i]!='B' && (iB-i)%4 == 0){
			++ansB;
		}	
	}
	cout << ansR <<" "<<ansB <<" "<<ansY <<" "<<ansG << endl;
	return 0;
}


