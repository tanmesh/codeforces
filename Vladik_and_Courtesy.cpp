#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int vk,va,i=1;
	cin >> vk >> va;
	while(1){
		if(i%2==0){
			va=va-i;
			if(vk-++i < 0){
				cout << "Vladik" << endl;
				return 0;
			}	
		}
		else{
			vk=vk-i;
			if(va-++i < 0){
				cout << "Valera" << endl;
				return 0;
			}
		}
	}
	return 0;
}