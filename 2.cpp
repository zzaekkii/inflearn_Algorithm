#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int A, B;
    cin >> A >> B;
    
    int sum=A;
    cout << A;
    
    for(int i=A+1; i<=B; i++){
    	cout << " +" << i;
    	sum+=i;
	}
	cout << " = " << sum;
}
