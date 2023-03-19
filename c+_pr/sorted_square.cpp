#include <vector>
#include<iostream>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  int size = array.size();

  vector<int> ans;

  for(int i =0;i<size;i++){
    ans.push_back(0);
  }

  int front=0;
  int end=size-1;

  for(int i =size-1;i>-1;i--){
    if(abs(array[front])>abs(array[end])){
      ans[i]=array[front]*array[front];
      front++;
    }
    else{
      ans[i]=array[end]*array[end];
      end--;
    }
  }
  return ans;
}




