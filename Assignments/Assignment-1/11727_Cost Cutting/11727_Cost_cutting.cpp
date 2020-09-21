// 11727 - Cost Cutting
// Date - 9/12/2020
// UVA accepted code

#include<stdio.h>
#include<iostream>

int main()
{
int A, B, C, T;
std::cin >> T;
  for (int i = 1; i <= T; i++) 
  {
    std::cin >> A >> B >> C;

    if (A > B && A < C || A > C && A < B) 
        std::cout << "Case " << i << ": " << A << "\n";
    else if(B > A && B < C || B < A && B > C)
        std::cout << "Case " << i << ": " << B << "\n";
    else if(C > A && C < B || C < A && C > B)
        std::cout << "Case " << i << ": " << C << "\n";
  }
  return 0;
}

