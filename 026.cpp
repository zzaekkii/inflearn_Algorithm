#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, K, i, j, cnt;
    cin >> N;
    
    for(i=0;i<N;i++){
    	cnt=1;
    	cin>>K;
    	for(j=0;j<i;j++){
    		if(arr[j]&&arr[j]>=(K-1))cnt++;
		}
    	arr[i]=K-1;
    	cout<<cnt<<" ";
    }
}
