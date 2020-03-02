#include "solution.h"

void Solution::Partition(int input[], int pivot, int size) {
  Swap(input[pivot],input[size - 1]);
  int j = 0; 
  for(int i = 0; i < size; i++){
    if(input[i] < input[size - 1]){
      Swap(input[i], input[j]);
      j++;
    }
  }
  Swap(input[j],input[size - 1]);
}

void Solution::Swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}

void Solution::print_array(int input[], int size){
  std::cout << '{';
  for(int i = 0; i < size; i++){
      std::cout << input[i];
      if(i < size - 1){
          std::cout << ',';
      }
  }
  std::cout << '}' << std::endl;
}
