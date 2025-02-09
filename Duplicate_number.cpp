#include <bits/stdc++.h>
using namespace std;
int duplicate(vector<int> &arr)
{

  // O(n^2)
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[i] == arr[j])
      {
        return arr[i];
      }
    }
  }
}

int duplicate_2(vector<int> &arr)
{

  // O(nlogn)-> T.C
  // O(n)-> S.C
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size() - 1; i++)
  {
    if (arr[i] == arr[i + 1])
      return arr[i];
  }
  return -1;
}
int duplicate_3(vector<int> arr)
{
  // negetive marking method
  // mark the index -ve if already visited therefore duplicate
  int ans = -1;
  for (int i = 0; i < arr.size(); i++)
  {
    // already visited
    int index = abs(arr[i]);
    if (arr[index] < 0)
    {
      return index;
    }
    arr[index] *= -1; // mark as visited
  }
}

int duplicate_4(vector<int> arr)
{
  // O(n)
  while (arr[0] != arr[arr[0]])
  {
    swap(arr[0], arr[arr[0]]);
  }
  return arr[0];
}
int main()
{
  vector<int> arr{1, 3, 4, 2, 2};
  int ans = duplicate(arr);
  cout << ans << endl;

  int ans2 = duplicate_2(arr);
  cout << ans2 << endl;

  int ans_3 = duplicate_3(arr);
  cout << ans_3 << endl;

  int ans_4 = duplicate_4(arr);
  cout << ans_4 << endl;
}