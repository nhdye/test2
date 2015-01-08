#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
int main(){
  vector<int> v;

  for(int i = 0; i < 100; ++i){
    v.push_back(i+21);
  }
  
  for(auto i: v){
    cout << i << endl;
  }



}
