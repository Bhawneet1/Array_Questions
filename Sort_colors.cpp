#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort_colors(vector<int> &arr)
{
  int i=0;
  int mid=0;
  int j=arr.size()-1;

  //O(n)
  while(mid<=j){
    switch(arr[mid]){
      case 0:
           swap(arr[mid++],arr[i++]);
           break;
      case 1:
            mid++;
            break;
      case 2:
            swap(arr[mid],arr[j--]);
    }
  }
}
int main()
{
  vector<int> arr{2,0,2,1,1,0};
  sort_colors(arr);
  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
}