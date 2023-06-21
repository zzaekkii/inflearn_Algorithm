#include <bits/stdc++.h>
using namespace std;

bool arr[100001]={1,1}; // 응 에라토스 쓸거야~ 

int reverse(int x){ // 문제 조건 - 뒤집는 함수 
	int tmp=0;
	while(x){
		tmp*=10;
		tmp+=x%10;
		x/=10;
	}
	return tmp;
}

bool isPrime(int x){ // 문제 조건 - 소수 판별 
	return !arr[x];
}
// 그런데 x가 10만 이하이니까 그냥 에라토스테네스의 체로
// 미리 만들어 두는 게 더 효율적이지 않으려나? 
// 메모리? 

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, X, i, j;
    
	for (i = 2; i <= 100000; i++)
		for (j = i + i; j <= 100000; j += i)
			arr[j] = 1;
			
    cin >> N;
    while(N--){
    	cin >> X;
    	if(isPrime(reverse(X)))
			cout << reverse(X) << " ";
	}
}
