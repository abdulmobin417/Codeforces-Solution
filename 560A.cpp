#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, temp = 0;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] == 1){
			temp = 1;
		}
	}
	if(temp) cout << -1;
	else cout << 1;
}