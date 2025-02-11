#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> add_number(vector<int> a,vector<int> b)
{
  vector<int> ans;
  int i=a.size()-1;
  int j=b.size()-1;
  int carry=0;
  while(j>=0 && i>=0)
  { 
    int x=a[i]+b[j]+carry;
    int digit=x%10;
    ans.push_back(digit);
    carry=x/10;
    i--;
    j--;
  }
  while(i>=0)//a bacha hai b khatam
  {
    int x=a[i]+0+carry;
    int digit=x%10;
    ans.push_back(digit);
    carry=x/10;
    i--;
  }
  while(j>=0)
  {
    int x=0+b[j]+carry;
    int digit=x%10;
    ans.push_back(digit);
    carry=x/10;
    j--;
  }
  if(carry)//at msb
  {
    ans.push_back(carry);
  }
  while(ans[ans.size()-1]==0)
  {
    ans.pop_back();
  }
  reverse(ans.begin(),ans.end());
  return ans;
}
int main()
{
 vector<int> a={9,5,4,9};
 vector<int> b={2,1,4};
 vector<int> ans=add_number(a,b);
 for(int i=0;i<ans.size();i++)
 {
  cout<<ans[i]<<" ";
 }
}