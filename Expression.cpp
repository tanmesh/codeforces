#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;
int main()
{
	int a,b,c,max=-1;
	cin >> a >> b >> c;
	
	if(max < c*(a+b)){
		max = (a+b)*c;
	}
	if(max < a*(b+c)){
		max = a*(b+c);
	}
	if(max < a+(b*c)){
		max = a+(b*c);
	}
	if(max < a*b*c){
		max = a*b*c;
	}
	if(max < a+b+c){
		max = a+b+c;
	}
	cout << max<< endl;
	return 0;	
}