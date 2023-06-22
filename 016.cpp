#include <bits/stdc++.h>
using namespace std;

int big[26];
int small[26];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string A, B;
    int i, flag = 0;
    
    cin >> A >> B;
        
    for(i=0;i<A.length();i++)
    	if(A[i]<91) big[A[i]-65]++;
    	else small[A[i]-97]++;
	
	for(i=0;i<B.length();i++)
		if(B[i]<91) big[B[i]-65]--;
		else small[B[i]-97]--;
	
	for(i=0;i<26;i++)
		if(big[i]!=0||small[i]!=0) flag=1;
		
	if(flag)cout<<"NO";
	else cout<<"YES";
}
