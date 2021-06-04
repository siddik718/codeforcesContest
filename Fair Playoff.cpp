
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,arr[5],a,b;
    cin >> t;
    while(t--)
    {
        for(int i = 0;i<4;i++)
        {
            cin >> arr[i];
        }
        a = max(arr[0],arr[1]);
        b = max(arr[2],arr[3]);
        sort(arr,arr+4);
        if((arr[2] == a || arr[2] == b) && (arr[3] == a || arr[3] == b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
