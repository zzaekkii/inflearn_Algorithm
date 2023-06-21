#include <bits/stdc++.h>
using namespace std;

bool arr[200001]={1,1};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, i, j, sum=0;
    
	for (i = 2; i <= 200000; i++)
		for (j = i + i; j <= 200000; j += i)
			arr[j] = 1;
	
	cin >> N;
	for(i=2;i<=N;i++)if(!arr[i])sum++;
	cout << sum;
}
