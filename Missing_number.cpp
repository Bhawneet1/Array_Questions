#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Missing_number_1(vector<int> arr){

  //O(nlogn)
  sort(arr.begin(),arr.end());
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=i)
    {
      return i;
    }
  }
  return n;
}
int Missing_number(vector<int> arr){
  int n=arr.size();
  int ans=0;

  //O(n)
  for(int i=0;i<=n;i++)
  {
    //0->n xor
     ans^=i;
  }
  for(int i=0;i<n;i++)
  {
    //0->n-1 xor as one missing will get in answer
    ans^=arr[i];
  }
  return ans;
}
int missingNumber(vector<int>& nums) {
  int sum1=0;
  int sum2=0;
  for(int i=0;i<=nums.size();i++)
  {
      sum1+=i;
  }
  for(int i=0;i<nums.size();i++)
  {
      sum2+=nums[i];
  }
  return sum1-sum2;
}
int main(){
  vector<int> arr{9,6,4,2,3,5,7,0,1};
  int an = Missing_number_1(arr);
  cout<<an<<endl;
  int ans=Missing_number(arr);
  cout<<ans;
}