#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S;
    int max=0, x, i;
    getline(cin,S);
    
    for(i=0;i<S.length();i++)
    	arr[S[i]-48]++;
    
    for(i=0;i<10;i++)
    	if(max<=arr[i]){
    		max=arr[i];
    		x=i;
		}
	cout << x;
}
