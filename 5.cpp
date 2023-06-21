#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S;
    cin >> S;
    
    int year;
    year=(S[0]-48)*10+S[1]-48;
    
	if(S[7]<51) cout << 100-year+20;
    else cout << 20-year;
    
	if(S[7]==49||S[7]==51)cout << " M";
    else cout << " W";
}
