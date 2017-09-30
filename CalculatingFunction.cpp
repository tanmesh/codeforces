#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;
int main()
{
	long long n, sum=0;
	cin >> n;

	if(n%2 == 0) {
		sum = n/2;
	}
	else{
		sum = (-1)*((n+1)/2);
	}

	cout << sum << endl;
	return 0;	
}