#include <iostream>

using namespace std;

int main() {
	int s,v1,v2,t1,t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;

	int first=v1*s+t1*2;
	int second=v2*s+t2*2;

	if(first < second){
		cout << "First\n";
	}
	if(second < first){
		cout << "Second\n";
	}
	if(second == first){
		cout << "Friendship\n";	
	}
	
	return 0;
}