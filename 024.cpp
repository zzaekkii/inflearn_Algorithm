#include <bits/stdc++.h>
using namespace std;

bool a[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, T, i, past;
    
    cin >> N >> past;
    for(i=1;i<N;i++){
    	cin >> T;
    	a[abs(T-past)]=1;
    	past=T;
	}
	for(i=1;i<N-1;i++)
		if(!a[i]){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}
