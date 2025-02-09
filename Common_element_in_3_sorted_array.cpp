#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> find_common(vector<int>A,vector<int>B,vector<int>C)
{
  int i=0;
  int j=0;
  int k=0;
  // we will use set because it will not take same common element 
  set<int> st;
  vector<int> ans;
  while(i<A.size() && j<B.size() && k<C.size())
  {
    if(A[i]==B[j] && B[j]==C[k])
    {
      //  ans.push_back(A[i]);
       st.insert(A[i]);
       i++;
       j++;
       k++;
    }
    else if(A[i]<B[j]){
      i++;
    }
    else if(B[j]<C[k]){
      j++;
    }
    else{
      k++;
    }
  }
  for(auto i:st){
    ans.push_back(i);
  }
  return ans;
}
int main()
{
  vector<int>A{1,5,10,20,40,80};
  vector<int>B{6,7,20,80,100};
  vector<int>C{3,4,15,20,30,70,80,120};
  vector<int> ans=find_common(A,B,C);
  //auto implicitly recognize the datatype
  for(auto it:ans){
    cout<<it<<" ";
  }
}