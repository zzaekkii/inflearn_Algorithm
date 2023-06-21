#include <bits/stdc++.h>
using namespace std;

int arr[50001];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, i, j;
    cin >> N;
    
    for(i=1;i<=N;i++)
    	for(j=i;j<=N;j+=i)
    		arr[j]++;
    
    for(i=1;i<=N;i++) cout<<arr[i]<<" ";
}
