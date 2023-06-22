#include <bits/stdc++.h>
using namespace std;

int arr[100], rank[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, i, j;
    cin >> N;
    
    for(i=0;i<N;i++)cin >> arr[i];
    
    for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
    		if(arr[i]<arr[j])rank[i]++;
    
    for(i=0;i<N;i++)
    	cout << rank[i]+1 << " ";   
}
