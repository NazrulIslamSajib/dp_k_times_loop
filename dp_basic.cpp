#include<bits/stdc++.h>
using namespace std;
int const mx=1e5+123;
int arr[mx];
int dp[mx];
int n,k;
int ok(int i)
{
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    if(i==n)
    {
        return 0;
    }
    int first=1e9;
    for(int j=1;j<=k;j++)
    {
        if(i+j<=n)
        first=min(first,abs(arr[i]-arr[i+j])+ok(i+j));
    }
    dp[i]=first;
    return dp[i];
}
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
  }
  memset(dp,-1,sizeof(dp));
  cout<<ok(1)<<endl;
  return 0;
}
