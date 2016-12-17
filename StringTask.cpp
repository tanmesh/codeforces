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
	string s;
	cin>>s;
	string new_str="";
	for(int i=0;i<s.length();++i){
		if(s[i]<91){
			s[i]+=32;
		}
		if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] =='u' || s[i]=='y')){
			new_str=new_str+'.'+s[i];
		}
	}
	cout<<new_str<<endl;
	return 0;
}