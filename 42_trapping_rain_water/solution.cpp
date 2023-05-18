#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> height = {4,2,3};
  int n=height.size(),result=0,ml=0,mr=0;
  vector<int> maxLeft(n,0),maxRight(n,0);
  
  for(int i=0;i<n;i++){
      maxLeft[i]=ml;
      ml=max(ml,height[i]);
  }
  for(int i=n-1;i>=0;i--){
      maxRight[i]=mr;
      mr=max(mr,height[i]);
  }
  for(int i=0;i<n;i++){
      int temp=0;
      temp=min(maxLeft[i],maxRight[i]);
      if(temp-height[i]>0){
        result+=temp-height[i];
      }

  }
  return 0;
}