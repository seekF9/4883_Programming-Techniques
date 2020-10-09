
vishwas karki <kvishwas908@gmail.com>
12:21 PM (7 hours ago)
to me

// 514 - Rails
// Date: 10/07/2020
// UVA accepted code


#include<iostream>
#include<stack>
 
using namespace std; 

// variables that read the number of carts to handle
// they are also checked to stop or continue the loop
int N, c;

// function that is created to handle the numbers from the input
// The numbers are arranged and checked to see if it is possible
// to marshall the coaches. 
void order_check(stack<int> c);  

int main() {
  stack<int> carts;
    for(;;) {
        //scanf("%d", &N);
        cin >> N; 
        if(N == 0) break;
 
        order_check(carts);
        cout << "\n"; 
    }
}

// function: check the order of the numbers
// returns: null
void order_check(stack<int> carts) {
    for(;;) {// loops until there is a 0 in the input file 
              // in which case the function returns to the driver 
              // code. 
        while(carts.size() > 0) carts.pop();
        int j = 0;
        for(int i = 0; i < N; i++) 
        {
            cin >> c ; 
            // check if the input is 0. If there is a 0 the 
            // funciton exits to the main.  
            if(c == 0) i = N;
 
            while(j < N && j != c && c != 0) {
                if(carts.size() > 0 && carts.top() == c) break;
                j++;
                carts.push(j);
            }
            if(carts.top() == c && c != 0) carts.pop();
        }
        if (c == 0) return;
        // output 

        if(carts.size() == 0) printf("Yes\n");
        else printf("No\n");
    }
}
}
