#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[6];
	for(int i=0; i<6; i++){cin >> a[i];}
	int num = round(pow(a[0] + a[1] + a[2], 2)) - round(pow(a[0], 2)) - round(pow(a[2], 2)) - round(pow(a[4], 2));
    cout << num;
	return 0;
}

