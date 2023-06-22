#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, M, K, cnt=0, max=0;
    
    cin >> N >> M;
    while(N--){
    	cin >> K;
    	if(K>M){
    		cnt++;
    		if(cnt>max)max=cnt;
		}
		else cnt=0;
	}
	cout << max;
}
