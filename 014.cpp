#include <bits/stdc++.h>
using namespace std;

bool arr[100001]={1,1}; // �� �����佺 ���ž�~ 

int reverse(int x){ // ���� ���� - ������ �Լ� 
	int tmp=0;
	while(x){
		tmp*=10;
		tmp+=x%10;
		x/=10;
	}
	return tmp;
}

bool isPrime(int x){ // ���� ���� - �Ҽ� �Ǻ� 
	return !arr[x];
}
// �׷��� x�� 10�� �����̴ϱ� �׳� �����佺�׳׽��� ü��
// �̸� ����� �δ� �� �� ȿ�������� ��������? 
// �޸�? 

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
