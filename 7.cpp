#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S, ans;
    getline(cin,S); // getline을 안 써서 생긴 문제.
    // 공백이 길어 문자열이 나눠져 들어옴.
	
    S.erase(remove(S.begin(),S.end(),' '),S.end());
    transform(S.begin(),S.end(),S.begin(),::tolower);
    cout << S;
    /*
    for(int i=0; i<S.length(); i++){
    	if(S[i]!=' ')
			ans+=tolower(S[i]);
	}
	cout << ans;
	*/
    /*
    for(int i=0;i<S.length();i++){
    	if(S[i]==' ') continue;
    	cout << tolower(S[i]);
	}    
    //
    S.erase(remove(S.begin(),S.end(),' '),S.end());
    transform(S.begin(),S.end(),S.begin(),::tolower);
    cout << S;
    //
    const char* ch;
    ch=S.c_str();
    char * ptr = strtok(ch, " ");
    vector<string> v;
    
    while(ptr!=NULL){
    	transform(string(ptr)).begin(),string(ptr).end(),string(ptr).begin(),::tolower);
    	v.push_back(string(ptr));
    	ptr=strtok(NULL," ");
	}
    for(auto i:v) cout << i;
    */
}
