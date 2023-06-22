#include <bits/stdc++.h>
using namespace std;

int a[100000];
int b[100000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, K, i, tmp, max=0;
    cin >> N >> K;
    
    cin >> a[0];
    for(i=1;i<N;i++){
		cin>>tmp;
		a[i]=a[i-1]+tmp;
	}
	for(i=0;i<K;i++)
		max+=a[i];
	for(i=N-1;i>=K;i--){
		b[i]=a[i]-a[i-K];
		if(max<b[i])max=b[i];
	}
    cout << max;
}
