#include <bits/stdc++.h>
using namespace std;

int A[100], B[100];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N, i;
    cin >> N;
    
    for(i=0;i<N;i++)cin>>A[i];
    for(i=0;i<N;i++)cin>>B[i];
    
    for(i=0;i<N;i++){
    	if(A[i]==B[i])cout<<"D\n";
    	else if(abs(A[i]-B[i])==1){
    		if(A[i]>B[i])cout<<"A\n";
    		else cout<<"B\n";
		}
		else{
			if(A[i]>B[i])cout<<"B\n";
			else cout<<"A\n";
		}
	}
}
