// 11498 - Division of Nlogonia
// Date - 9/12/2020
// UVA accepted code

#include<stdio.h>
#include<iostream>

int main()
{
    int K,M,N,X,Y,J;
    std::cin >> K ;
    while( K > 0 )
    {
    std::cin >> M >> N; 

        for(int i=0; i<K; i++)
        {
            std::cin >> X >> Y ; 
            X=X-M;
            Y=Y-N;
            if(X*Y==0)
                std::cout << "divisa\n";
            else if(X>0&&Y>0)
                std::cout << "NE\n";
            else if(X<0&&Y>0)
                std::cout << "NO\n";
            else if(X<0&&Y<0)
                std::cout << "SO\n";
            else
                std::cout << "SE\n";

        }
    std::cin >> K;    
    }
    return 0;
}