#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Remove_Duplicate(vector<int> arr){
   int i=0;
   int j=1;

   //O(n)
   while(j<arr.size()){
      if(arr[i]==arr[j]) j++;
      else{
        i++;
        swap(arr[i],arr[j]);
        j++;
      }
   }
   return i+1;
}
int main()
{
  vector<int> arr{1,1,2};
  int ans=Remove_Duplicate(arr);
  cout<<ans<<endl;
}