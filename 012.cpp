#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, i, p, c, sum=0;
    cin >> N;
    
    for(i=c=1,p=9;;i++,p=p*10+9,c*=10){
    	if(N<p){
    		sum+=i*(N-(pow(10,i-1)-1));
    		break;
		}
		sum+=i*9*pow(10,i-1);
	}
	cout << sum;
}
