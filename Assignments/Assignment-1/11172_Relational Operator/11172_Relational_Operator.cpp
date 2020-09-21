// 11172 - Relational Operator
// Date: 9/12/2020
// UVA accepted code

#include<stdio.h>
#include <iostream>

int main() {
  int t, a, b, i;
  std::cin >> t; 
  while(t > 0)
  {
    std::cin >> a >> b ; 
    if(a > b) std::cout << ">" << "\n";
    else if(a < b) std::cout << "<" << "\n";
    else if(a = b) std::cout << "=" << "\n";
    t--; 
  }
  
  return 0;
}


