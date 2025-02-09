#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Move_neg(vector<int> &arr)
{
  int i=0;
  int j=arr.size()-1;

  //O(n)
  while(i<j)
  {
    if(arr[i]<0) i++;
    else if(arr[j]>0) j--;
    else if(arr[i]>0 && arr[j]<0) swap(arr[i++],arr[j--]);
  }
}
int main()
{
  vector<int> arr{1,2,-3,4,-5,6};
  Move_neg(arr);
  for(auto it:arr){
    cout<<it<<" ";
  }
}