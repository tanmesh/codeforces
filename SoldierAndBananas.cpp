#include <iostream>
#include <string.h>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int k,n,w,ans;
	cin >> k >> n >> w;
	ans=(w*(w+1)/2)*k - n;
	if(ans < 0){
		ans=0;
	}	
	cout << ans << endl;
	return 0;

}