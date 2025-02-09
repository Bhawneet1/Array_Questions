// 724 leetcode
// when left sum of an index is equal to right sum
// if multiple pivot index then return first from left
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Pivot_index(vector<int> nums){
  int n=nums.size();  

  //O(n*(n+n))
  for(int i=0;i<n;i++)
  {
    int lsum=0;
    int rsum=0;
    for(int j=0;j<i;j++)
        lsum+=nums[j];

    for(int k=i+1;k<n;k++)
      rsum+=nums[k];

    if(lsum == rsum)
      return i;
  }
  return -1;
}

int Pivot_index_optimized(vector<int> nums){
    vector<int> lsum(nums.size(),0);
    vector<int> rsum(nums.size(),0);
    
    int n=nums.size();
    
    //O(n+n+n)
    for(int i=1;i<n;i++)
    {
      lsum[i]=lsum[i-1]+nums[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
      rsum[i]=rsum[i+1]+nums[i+1];
    }
    
    for(int i=0;i<n;i++)
    {
      if(lsum[i]==rsum[i])
      {
        return i;
      }
    }
    return -1;
}
int main()
{
  vector<int> nums{1,7,3,6,5,6};
  int ans=Pivot_index(nums);
  cout<<ans<<endl;

  int ans_2=Pivot_index_optimized(nums);
  cout<<ans_2<<endl;
}