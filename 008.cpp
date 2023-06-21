#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S;
    cin >> S;
    int cnt=0;
    
    for(int i=0;i<S.length();i++){
    	if(S[i]=='(')cnt++;
    	else if(S[i]==')'){
    		if(cnt<1){
    			cout << "NO";
    			return 0;
			}
			cnt--;
		}
	}
	if(cnt)cout<<"NO";
	else cout <<"YES";
}
