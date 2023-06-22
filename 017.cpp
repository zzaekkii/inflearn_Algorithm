#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, K, SUM;
    cin >> N;
    
    while(N--){
    	cin >> K >> SUM;
    	if((K*(K+1)/2)==SUM)cout<<"YES\n";
    	else cout <<"NO\n";
	}
}
