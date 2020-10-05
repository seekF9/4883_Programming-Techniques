// 11727 - Cost Cutting
// Date - 9/12/2020
// UVA accepted code


#include<iostream>
#include<string>


int main()
{
    // variable assignment. 
    int K,T; 
    int Total=0;
    std::string key;
   // input the number of operations to be conducted.
    std::cin>>T;
    while(T--)
    {
        std::cin>>key;
        if(key.compare("donate")==0)// compares the input string with donate 
        {                           // if the donate string matches the program adds the amount. 
            std::cin>>K;// reads the amount to be added
            Total=Total+K;// Total addition 
        }
        else 
        std::cout<<Total<< "\n";// if the word is report which is assumed to be the only other operation. 
    }                         // the total sum unitil this point is displayed.        
   
    return 0;
}
   
