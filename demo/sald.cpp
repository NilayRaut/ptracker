#include <bits/stdc++.h>
using namespace std;
         
int main(){
         
  vector<int>nums = {3,4,5,2};
  sort(nums.begin(),nums.end());
  int i = nums[nums.size() - 1]-1;
  int j = nums[nums.size() - 2]-1;
  cout << i << endl;
  cout << j << endl;
  cout << i * j << endl;
      
  return 0;
} 