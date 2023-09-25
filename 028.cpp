#include <bits/stdc++.h>
using namespace std;
int N;
int c2, c5;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	
	for(int i=N;i>1;i--){
	    int t=i;
		while(!(t%2)){
			t/=2;
			c2++;
		}
		while(!(t%5)){
			t/=5;
			c5++;
		}
	}
	cout << min(c2,c5);
}
