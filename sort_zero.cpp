#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
         cin >> a[i];
      bool v[n + 1] = {false};
      int last = -1;
      for (int i = n - 2; i >= 0; i--)
      {
         if (a[i] > a[i + 1])
         {
            last = i;
            break;
         }
      }
      if (last == -1)
      {
         cout << 0 << endl;
         continue;
      }
      for (int i = 0; i <= last; i++)
      {
         v[a[i]] = true;
      }
      for (int i = last + 1; i < n; i++)
      {
         if (v[a[i]] == true)
         {

            last = i;
         }
      }

      for (int i =last;i>=0; i--)
      {
         v[a[i]] = true;
      }
      int ans = 0;
      for (int i = 0; i <= n; i++)
      {
         if (v[i] == true)
            ans++;
      }
      cout << ans << endl;
   }

   return 0;
}