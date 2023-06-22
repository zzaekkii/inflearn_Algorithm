#include <bits/stdc++.h>
using namespace std;

int A[10], B[10];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int i, a=0, b=0, f=0;
    for(i=0;i<10;i++)cin>>A[i];
    for(i=0;i<10;i++)cin>>B[i];
    
    for(i=0;i<10;i++){
    	if(A[i]==B[i])a++,b++;
    	else if(A[i]>B[i])a+=3;
    	else b+=3;
    	if(a==b){
    		if(A[i]>B[i])f=0;
    		else if(A[i]<B[i])f=1;
		}
    	else if(a>b)f=0;
    	else if(b<a)f=1;
    }
    
    cout<<a<<" "<<b<<"\n";
    if(a==b&&a==10)cout<<"D";
    else if(a==b){
    	if(f)cout<<"B";
    	else cout<<"A";
	}
    else if(a>b)cout<<"A";
    else cout<<"B";
}
