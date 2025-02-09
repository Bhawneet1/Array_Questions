#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Missing_in_duplicate(vector<int> nums)
{
    for(int i=0;i<nums.size();i++)
    {
      int index=abs(nums[i]);
      if(nums[index -1]>0){
        nums[index-1] *=-1;
      }
    }
    for(int i=0;i<nums.size();i++)
    {
      cout<<nums[i]<<" ";
    }cout<<endl;
    for(int i=0;i<nums.size();i++)
    {
      if(nums[i]>0){
        cout<<i+1<<" ";
      }
    }cout<<endl;
}

void Missing_el_2(vector<int> nums){
  //Sorting + Swapping
  int i=0;
  while(i<nums.size()){
    int index= nums[i]-1;
    if(nums[i] != nums[index]){
      swap(nums[i],nums[index]);
    }
    else
    {
      ++i;
    }

  }
  for(int i=0;i<nums.size();i++)
  {
    cout<<nums[i]<<" ";
  }cout<<endl;

  for(int i=0;i<nums.size();i++)
  {
    if(nums[i] != i+1)
    {
      cout<<i+1<<" ";
    }
  }
}
int main()
{
  vector<int> nums{1,3,5,3,4};
  Missing_in_duplicate(nums);
  Missing_el_2(nums);
}