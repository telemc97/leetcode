#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout << "Give array size \n";
  int n;
  cin >> n;
  vector<vector<int>> k( n , vector<int> (n, -1)); 
  int value =1;
  int active_row = 0;
  int active_col = 0;
  int i=0;
  while(n*n>=value){
    //increase col
    while(k[active_row][i]==-1){
      k[active_row][i] = value;
      value++;
      active_col = i;
      if(i+1==n){
        break;
      }else{
        i++;
      }
    }
    i=active_row+1;
    //increase row
    while(k[i][active_col]==-1){
      k[i][active_col] = value;
      value++;
      active_row=i;
      if(i+1==n){
        break;
      }else{
        i++;
      }
    }
    i=active_col-1;
    //decrease col
    while(k[active_row][i]==-1){
      k[active_row][i] = value;
      value++;
      active_col=i;
      if(i-1<0){
        break;
      }else{
        i--;
      }
    }
    i=active_row-1;
    //decrease row
    while(k[i][active_col]==-1){
      k[i][active_col] = value;
      value++;
      active_row=i;
      if(i-1<0){
        break;
      }else{
        i--;
      }
    }
    i=active_col+1;
  }
  return 0;
}