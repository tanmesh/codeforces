#include <iostream>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> ans;
	for(int i=0; i<2; ++i) {
		int m;
		cin >> m;
		for(int j=0; j<m; ++j) {
			int cnt;
			cin >> cnt;
			ans.insert(cnt);
		}
	}
	if(ans.size() == n) {
		cout << "I become the guy.\n";
		return 0;
	}
	cout << "Oh, my keyboard!" << endl;
	return 0;
}