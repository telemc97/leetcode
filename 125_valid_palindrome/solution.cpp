#include <iostream>

using namespace std;

int main(){
  string s = "A man, a plan, a canal: Panama";
  int i = 0;
  int j = s.size()-1;
  while (i>=0 || j<s.size()){
    while (!isalnum(s[i]) && i < j){
      i++;
    }
    while (!isalnum(s[j]) && i < j){
      j--;
    }
    if (tolower(s[i]) != tolower(s[j])){
      return false;
    }
    i++;
    j--;
  }

  return 0;
}