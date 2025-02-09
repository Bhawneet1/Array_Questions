#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool key_pair_1(vector<int> arr,int target)
{
  int n=arr.size();

  //O(n^2)
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]+arr[j]==target)
      {
         return true;
      }
    }
  }
  return false;
}

bool key_pair_optimized(vector<int> arr,int target){

  //O(nlogn) for inbuild sort function
  sort(arr.begin(),arr.end());
  int n=arr.size();
  int i=0;
  int j=n-1;
  while(i<j)
  {
    int csum=arr[i]+arr[j];
    if(csum==target){
      return true;
    }
    else if(csum<target){
      i++;
    }
    else {
      j--;
    }
  }
  return false;
}
int main()
{
  vector<int> arr{1,4,45,6,10,8};
  int target=16;
  bool ans=key_pair_1(arr,target);
  if(ans){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }

  bool ans2=key_pair_optimized(arr,target);
  if(ans2){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }
}