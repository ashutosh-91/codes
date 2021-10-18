#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)
#define nline "\n"
#define mp make_pair
#define inf 1000000009
void precision(int a) {cout << setprecision(a) << fixed;}
/*------------------------------------------------------------------------------------------------------*/

bool iscom(int m)
{
   for (int i = 2; i * i <= m; i++)
   {
      if (m % i == 0)
         return false;
   }
   return true;
}
void solve()
{

   int t, n;
   cin >> t;

   while (t--)
   {
      cin >> n;
      int no, sum = 0;
      for (int i = 1; i <= n; i++)
      {
         cin >> no;
         sum += no;
         if (!iscom(sum))
            cout << i << " ";
         else
            sum -= no;
      }
      cout << nline;
   }
}


int main() {
#ifndef ONLINE_JUDGE
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
   solve();



}