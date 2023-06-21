#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, max=0, x, t, tmp;
    cin >> N;
    
    while(N--){
    	int sum=0;
    	cin >> tmp;
    	t=tmp;
    	while(tmp){
    		sum+=tmp%10;
    		tmp/=10;
		}
		if(max<=sum){
			max=sum;
			x=t;
		}
	}
	cout << x;
}
