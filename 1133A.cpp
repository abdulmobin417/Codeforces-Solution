#include <bits/stdc++.h>
using namespace std;

int removeColon(string s)
{
    if (s.size() == 4)
        s.replace(1, 1, "");

    if (s.size() == 5)
        s.replace(2, 1, "");

    return stoi(s);
}

string diff(string s1, string s2)
{
    int time1 = removeColon(s1);
    int time2 = removeColon(s2);
    int h1 = time1/100;
    int m1 = time1%100;
    int h2 = time2/100;
    int m2 = time2%100;
    int time, m4;
    string res;
    if(h1<h2){
        time = (h2*60+m2) - (h1*60+m1);
    }else if(h1 == h2){
        if(m1 <= m2) time = m2 - m1;
        else time = 24 * 60 - (m1 - m2);
    }else{
        time = 24*60 + (h2*60+m2) - (h1*60+m1);
    }
    int middle = time/2;
    int h3 = middle / 60;
    int m3 = middle % 60;
    m4 = m1 + m3;
    if(m4 >= 60){
        m4 = m1+m3-60;
        h3++;
    }

    if(h1+h3 < 10 && m4 < 10) res = '0' + to_string(h1+h3) + ':' + '0' + to_string(m4);
    else if(h1+h3 < 10) res = '0' + to_string(h1+h3) + ':' + to_string(m4);
    else if(m4 < 10) res = to_string(h1+h3) + ':' + '0' + to_string(m4);
    else res = to_string(h1+h3) + ':' + to_string(m4);
    return res;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << diff(s1, s2) << endl;
    return 0;
}
