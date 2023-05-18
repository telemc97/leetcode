#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums){
  vector<vector<int>> result;

  if (nums.size()<3){
    return result;
  }

  sort(nums.begin(),nums.end());
  int i=0;
  while (i<nums.size()-2){
    int j=i+1;
    int k=nums.size()-1;
    while (j<k){
      int result = nums[i]+nums[j]+nums[k];
      if (result < 0){
        

        result.push_back({nums[i],nums[j],nums[k]}); 
      }
      j++;
      k--;
    }
    i++;
  }
  return result;
}

int main(){
  vector<int> numbers = {-1,0,1,2,-1,-4};
  vector<vector<int>> res = threeSum(numbers);

  return 0;
}