#include <iostream>
#include <string.h>
#include <cstring>
#include <set>
#include <vector>
#include <math.h>


using namespace std;

int main()
{
	int matrix[5][5],x1,y1;
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			cin >> matrix[i][j];
			if(matrix[i][j]==1){
				x1=i,
				y1=j;
			}
		}
	}
	cout << abs(x1-2)+abs(y1-2) << endl;
	return 0;

}