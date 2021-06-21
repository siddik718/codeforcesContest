#include<iostream>
using namespace std;
const int maxN = 1e5+10;
int sum[maxN];

int main()
{
  int n,q,l,r;
  char s[maxN];

  cin >> n >> q >> (s+1);
  for(int i = 1;i<=n;i++)
  {
    sum[i] = sum[i-1] + (s[i] - 'a' + 1 );
  }

  while(q--)
  {
    cin >> l >> r;
    cout << (sum[r] - sum[l-1]) << "\n";
  }

    return 0;
}
