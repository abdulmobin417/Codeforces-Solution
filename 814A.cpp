#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, j = 0;
	cin >> n >> k;
	int a[n], b[k];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<k; i++){
		cin >> b[i];
	}
	sort(b, b+k, greater<int>());
      for(int i=0; i<n; i++){
          if(a[i] == 0){
              a[i] = b[j];
              j++;
          }
      }
      if(is_sorted(a,a+n)) cout << "NO" << endl;
      else cout << "YES" <<endl;
}