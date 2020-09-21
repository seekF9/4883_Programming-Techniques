// 12372 - Packing for holiday
// Date: 9/12/2020
// UVA accepted code

#include <stdio.h>
#include <iostream>

int main() 
{
  int T,L,W,H;
  std::cin >> T;
  for(int i = 1; i <= T; i++)
  {
      std::cin >> L >> W >> H; 
        if(L <= 20 && W <= 20 && H <= 20)
        std::cout << "Case " << i << ":" << " good" << "\n"; 
        else 
        std::cout << "Case " << i << ":" << " bad" << "\n"; 
  }
  return 0;
}


