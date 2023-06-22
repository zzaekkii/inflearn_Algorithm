#include <bits/stdc++.h>
using namespace std;

int arr[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, i, max, cnt=0;
    cin >> N;
    
    for(i=0;i<N;i++) cin >> arr[i];
    max = arr[N-1];
    for(i=N-2;i>=0;i--)
    	if(arr[i]>max){
    		max=arr[i];
    		cnt++;
		}
    cout << cnt;
}
