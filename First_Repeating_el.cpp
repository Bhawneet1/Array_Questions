#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int first_repeating(vector<int> nums){
    //indexing is 1 based

    //O(n^2)
    for(int i=0;i<nums.size();i++)
    {
      bool isRepeated = false;
      for(int j=i+1;j<nums.size();j++)
      {
        if(nums[i]==nums[j]){
          isRepeated=true;
          return i+1;
          // 1 based indexing
        }

      }
    }
    return -1;
}

int first_reapeating_2(vector<int> arr){
  //hashing
  unordered_map<int ,int> hash;
  //item,count

  //O(n)
  for(int i=0;i<arr.size();i++)
  {
    hash[arr[i]]++;
  }
  for(int i=0;i<arr.size();i++)
  {
    if(hash[arr[i]]>1)
    {
      return i+1;
    }

  }
  return -1;
}
int main()
{
 vector<int> arr{1,5,3,4,3,5,6};
 int ans=first_repeating(arr);
 cout<<ans<<endl;

 int ans1=first_reapeating_2(arr);
 cout<<ans1<<endl;
}