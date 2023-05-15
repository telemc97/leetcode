#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
  vector<int> nums = {100,4,200,1,3,2};
  sort(nums.begin(), nums.end());
  int last_num;
  int cons = 0;
  int cons_max = 0;
  if (nums.size()==0){
    return 0;
  }
  for (int i=1;i<nums.size();i++){;
    if (nums[i]-nums[i-1]==0){
      continue;
    }
    if (nums[i]-nums[i-1]==1){
      cons++;
      if (cons>cons_max){
        cons_max = cons;
      }
    }else{
      cons = 0;
    }
      
  }

  int result = cons_max + 1;
  return 0;
}