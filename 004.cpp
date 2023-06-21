#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, age, max, min;
    cin >> N;
    
    cin >> age;
    N--;
    min=max=age;
    
    while(N--){
    	cin >> age;
    	if(max<age)max=age;
    	if(min>age)min=age;
	}
	cout << max - min;
}
