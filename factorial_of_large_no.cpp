#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> fact(int n)
{
  vector<int> ans;
  ans.push_back(1);
  int carry=0;
  for(int i=2;i<=n;i++){
    for(int j=0;j<ans.size();j++)
    {
      int x=ans[j]*i+carry;
      ans[j]=x%10;
      carry=x/10;
    }
    if(carry)
    {
      ans.push_back(carry);
    }
    carry=0;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}
int main()
{
   int n=7;//jiska fact nikalna hai
   vector<int> ans=fact(n);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   } 
}