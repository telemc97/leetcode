#include<iostream>
#include<vector>

using namespace std;

string encode(vector<string>& strs){
  string str = "";
  for (int i=0;i<strs.size();i++){
    str = str + strs[i] + '#';
  }
  return str;
}

vector<string> decode(string& str){
  int i=0;
  vector<string> result;
  while (i<str.size()){
    string tmp_str = "";
    while (str[i] != '#'){
      tmp_str = tmp_str+str[i];
      i++;
    }
    i++;
    result.push_back(tmp_str);

  }

  return result;
}


int main(){
  vector<string> strings = {"lint","code","love","you"}; 
  string str = encode(strings);
  vector<string> strings_res = decode(str);
  return 0;
}

