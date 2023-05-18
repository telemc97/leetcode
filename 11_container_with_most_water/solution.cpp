#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> height = {1,8,6,2,5,4,8,3,7};
  int result=0;
  int curr_res;
  int i=0;
  int j = height.size()-1;
  while (i<j){
    curr_res = min(height[i], height[j]) * (j-i);
    result = max(curr_res, result);
    if (height[i]<height[j]){
      i++;
    }else{
      j--;
    }
  }
  return 0;
}