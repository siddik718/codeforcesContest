#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t,n,m,k;
cin >> t;
while(t--){
cin >> n >> m >> k;
int res = ((n*m)-2) + 1;
if(res == k)
    cout << "YES\n";
else
    cout << "NO\n";

}
return 0;
}

