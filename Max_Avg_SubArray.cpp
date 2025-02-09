#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float Max_Avg_Subarray(vector<int> nums, int k) {
  int maxSum = INT_MIN;
  int i=0;
  int j=k-1;

  //O(n^2)
  while(j<nums.size()){
    int sum=0;
    for(int y=i;y<=j;y++)
    {
      sum+=nums[y];

    }
    maxSum=max(sum,maxSum);
    i++;
    j++;
  }
  return (float)maxSum/(float)k;
}

float Max_Avg_Subarray_2(vector<int> nums,int k)
{
  int i=0;
  int j=k-1;
  int sum=0;

  //Sliding Window
  for(int y=i;y<=j;y++)
      sum+=nums[y];
  
  int maxSum=sum;
  j++;// will save when only one window then while donot run

  //O(n)
  while(j<nums.size()){
    sum-=nums[i++];
    sum+=nums[j++];
    maxSum=max(sum,maxSum);
  }
  float maxAvg=maxSum/(double)k;
  return maxAvg;
}
int main()
{
  vector<int> arr{1,12,-5,-6,50,3};
  int k=4;
  float ans=Max_Avg_Subarray(arr,k);
  cout<<ans<<endl;

  float ans_2=Max_Avg_Subarray_2(arr,k);
  cout<<ans_2<<endl;
}