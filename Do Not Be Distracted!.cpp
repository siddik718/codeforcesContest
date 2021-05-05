#include<bits/stdc++.h>
using namespace std;
bool YES(string s)
{
    for(int i = 0;i<s.size()-1;i++){
        if(s[i] != s[i+1]){
            for(int j=i+1;j<s.size();j++){
                if(s[j] == s[i])
                    return false;
            }
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
if(YES(s))
    cout << "YES\n";
else
    cout << "NO\n";
    }
    return 0;
}
