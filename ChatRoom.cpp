#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{

	char ch;
    string s = "";
    char str[5]={'h', 'e', 'l', 'l', 'o'};
    int i=0;
    while(cin >> ch)
    {		
    	if(ch == str[i]){
    		s += ch;
    		++i;
    	}
    }

    if( s == "hello"){
    	cout << "YES\n" ;
    	return 0;
    }
    cout<<"NO\n";
    return 0;
}
       	

       	