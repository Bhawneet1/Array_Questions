#include<bits/stdc++.h>
using namespace std;
vector<int> spiral_print(vector<vector<int>> nums){
    vector<int> ans;
    int rowcount=nums.size();
    int colcount=nums[0].size();
    int startingRow=0;
    int startingCol=0;
    int endingRow=rowcount-1;
    int endingCol=colcount-1;
    int total=rowcount*colcount;
    int count=0;
    while(count<total){
       for(int i=startingCol;i<=endingCol;i++)
       {
          ans.push_back(nums[startingRow][i]);
          count++;
          return ans;
      }
       startingRow++;
       for(int i=startingRow;i<=endingRow;i++)
       {
           ans.push_back(nums[i][endingCol]);
           endingCol--;
           count++;

       }
       for(int i=endingCol;i>=startingCol;i--)
       {
          ans.push_back(nums[endingRow][i]);
          endingRow--;
          count++;
       }
       for(int i=endingRow;i>=startingRow;i--)
       {
          ans.push_back(nums[i][startingCol]);
          startingCol++;
          count++;
       }
    }
}
int main()
{
  vector<vector<int>> nums={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  vector<int> ans=spiral_print(nums);
  for(auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}