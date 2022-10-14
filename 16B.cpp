#include<bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] > v2[1];
}

int main()
{
    int n, m, num = 0;
    cin >> n >> m;
    vector<vector<int> > vect;
    int val;
    for(int i = 0; i < m; i++){
        vector<int> temp;
        for(int j = 0; j < 2; j++){
            cin >> val;
            temp.push_back(val);
        }
        vect.push_back(temp);
        temp.clear();
    }

    sort(vect.begin(), vect.end(), sortcol);

    for(int i=0; i< m; i++){
        if(n >= vect[i][0]){
            n = n - vect[i][0];
            num += (vect[i][0] * vect[i][1]);
        }else if(n <= vect[i][0]){
            num += (n * vect[i][1]);
            n = 0;
        }
    }
    cout << num;
    return 0;
}
