// 12372 - Packing for holiday
// Date: 9/12/2020
// UVA accepted code

#include <stdio.h>
#include <iostream>

int main()
{
    int Test_case, Length, Width, H;
    std::cin >> Test_case;
    // for loop that checks the box with suitcase size
    for (int i = 1; i <= Test_case; i++)
    {
        std::cin >> L >> W >> H; // reding input
        if (Length <= 20 && Width <= 20 && Height <= 20) // box fits
            std::cout << "Case " << i << ":" << " good" << "\n";
        else if(Length > 20 && Width > 20 && Height > 20) // box does not fit
            std::cout << "Case " << i << ":" << " bad" << "\n";
    }
    
}


