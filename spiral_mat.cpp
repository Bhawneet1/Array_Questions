#include<bits/stdc++.h>
using namespace std;
vector<int> spiral_print(vector<vector<int>> &matrix){
    vector<int> ans;
    int m=matrix.size();
    int n=matrix[0].size();
    int total=n*m;
    
    int startingRow=0;
    int startingCol=0;
    int endingRow=m-1;
    int endingCol=n-1;
    
    int count=0;
    while(count<total){
       for(int i=startingCol;i<=endingCol && count<total;i++)
       {
          ans.push_back(matrix[startingRow][i]);
          count++;
          
      }
       startingRow++;
       for(int i=startingRow;i<=endingRow && count<total;i++)
       {
           ans.push_back(matrix[i][endingCol]);
           count++;
       }
       endingCol--;
       for(int i=endingCol;i>=startingCol && count<total;i--)
       {
          ans.push_back(matrix[endingRow][i]);
          count++;
       }
       endingRow--;


       for(int i=endingRow;i>=startingRow && count<total;i--)
       {
          ans.push_back(matrix[i][startingCol]);
          count++;
       }
       startingCol++;
    }
    return ans;
}
int main()
{
  vector<vector<int>> nums={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  vector<int> ans=spiral_print(nums);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }
}