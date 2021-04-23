#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,ans;
    long long int n;
    cin >> t;
    while(t--){
    string s;
    ans = 0;
        cin >> n;
        if(n%2050 != 0){
            cout << "-1\n";continue;
        }
        n /=2050;
        s = to_string(n);
        for(int i = 0;i<s.size();i++){
            ans += s[i] - 48;
        }
        cout << ans << endl;
    }

    return 0;
}
