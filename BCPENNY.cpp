#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << n << " ";
    int k = s.size();
    int TTT = 0,TTH = 0,THT = 0,THH = 0,HTT = 0,HTH = 0,HHT = 0,HHH = 0;
    for(int i = 2; i < k; i++)
    {
        if(s[i - 2] == 'T' && s[i - 1] == 'T' && s[i] == 'T')
            ++TTT;
        if(s[i - 2] == 'T' && s[i - 1] == 'T' && s[i] == 'H')
            ++TTH;
        if(s[i - 2] == 'T' && s[i - 1] == 'H' && s[i] == 'T')
            ++THT;
        if(s[i - 2] == 'T' && s[i - 1] == 'H' && s[i] == 'H')
            ++THH;
        if(s[i - 2] == 'H' && s[i - 1] == 'T' && s[i] == 'T')
            ++HTT;
        if(s[i - 2] == 'H' && s[i - 1] == 'T' && s[i] == 'H')
            ++HTH;
        if(s[i - 2] == 'H' && s[i - 1] == 'H' && s[i] == 'T')
            ++HHT;
        if(s[i - 2] == 'H' && s[i - 1] == 'H' && s[i] == 'H')
            ++HHH;
    }
    cout << TTT << " " << TTH << " " << THT << " " << THH << " " << HTT << " " << HTH << " " << HHT << " " << HHH << "\n";
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }    
    else        t = 1;
    while(t--)
    {
        solution();
    }
}