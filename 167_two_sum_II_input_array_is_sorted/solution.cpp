#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> numbers = {1,3,4,4};
  int target = 8;
  vector<int> solution;
  int i=0;
  while (i<numbers.size()-1){
    int j= i+1;
      while (j<numbers.size() && numbers[i]+numbers[j]<=target){
        if (numbers[i]+ numbers[j]== target){
          solution.push_back(i+1);
          solution.push_back(j+1);
        }
        j++;
        while (j<numbers.size()){
          if (numbers[j]-numbers[j-1]==0){
            j++;
          }else{
            break;
          }
        }
      }
      i++;
      while (i<numbers.size()){
        if (numbers[i]-numbers[i-1]==0){
          i++;
        }else{
          break;
        }
      }
    }
  return 0;
}