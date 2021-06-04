
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,arr[2005];

    cin >> t;

    while(t--)
    {
        vector <int> even;
        cin >> n;
        for(int i = 0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i = 0;i<n;i++)
        {
            if(arr[i]%2 == 0)
                even.push_back(arr[i]);
        }
                for(int i = 0;i<n;i++)
        {
            if(arr[i]%2 == 1)
                even.push_back(arr[i]);
        }

        int cnt = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(gcd(even[i],2*even[j]) > 1)
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }


    return 0;
}
