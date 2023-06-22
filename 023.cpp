#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, i, tmp, past, cnt=1, max=1;
    
    cin >> N;
    cin >> past;
    for(i=1;i<N;i++){
    	cin >> tmp;
    	if(tmp>=past)cnt++;
    	else cnt=1;
    	if(max<cnt)max=cnt;
    	past=tmp;
	}
	cout << max;
}
