#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, i, sum=0;
    cin >> N;
    
    for(i=1;i<N/2;i++)
    	if(!(N%i)) {
			sum+=i;
    		cout << i << " + ";    		
		}
	cout << i << " = " << sum+i;
}
