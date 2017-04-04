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

int main(){
	int limak,bob;
	cin >> limak >> bob;
	int ans=0;
	while(limak <= bob){
		limak+=(3*limak);
		bob+=(2*bob);
		++ans;
	}
	cout << ans << endl;
}