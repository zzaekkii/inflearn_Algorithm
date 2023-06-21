#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S, tmp;
    cin >> S;
    
    int i, ans, cnt=1;
    for(i=0;i<S.length();i++)
    	if(S[i]>47&&S[i]<58)tmp+=S[i];
    
	const char* ch;
    ch=tmp.c_str();
    ans=atoi(ch);
    
    for(i=1;i<=ans/2;i++)if(!(ans%i))cnt++;
    
    cout << ans << "\n" << cnt;
}
