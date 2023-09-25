#include <bits/stdc++.h>
using namespace std;
int N;
int arr[1000];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	for(int i=N;i>1;i--){
		int t=i;
		for(int j=2;t!=1;j++)
			while(!(t%j)){
				arr[j]++;
				t/=j;
			}
		}
	
	cout << N << "! = ";
	for(int i=2;i<=N;i++)
		if(arr[i])cout << arr[i] << ' ';
}
