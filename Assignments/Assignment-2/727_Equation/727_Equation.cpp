// 727 - Equation 
// 10/08/2020
// UVA Accepted code

#include <iostream>
#include <stack>
#include <cstdlib>
#include <cstring>

using namespace std;

int Priority(char c); 
stack <char> expression;

// Main Program
int main() {

    int C_1, i;
    char s[10], c;
    cin >> C_1; 
    gets(s); 
    gets(s);
    while (C_1--) {
      // while loop to check for the Priority of the expression and store it in the stack.
        while (gets(s) && strlen(s)) {
            c = s[0];
            if (c==' ') break;
            if (c=='(') 
            {
                expression.push(c);
            }
            else if (c=='+' || c=='-' || c=='*' || c=='/') 
            {
                while (!expression.empty() && Priority(c) <= Priority(expression.top())) {
                    printf("%c", expression.top());
                    expression.pop();
                }
                expression.push(c);
            }
            else if (c==')') 
            {
                while (expression.top()!='(') 
                {
                    printf("%c", expression.top());
                    expression.pop();
                }
                expression.pop();
            }
            else printf("%c", c);
        }
        while (!expression.empty()) {
            printf("%c", expression.top()); expression.pop();
        }
        cout << endl;
        if (C_1) cout << endl;
    }
}


// priority function created to check the priority of the symbols.
// returns : int
// input : char
int Priority(char c) {
    if(c =='(') return 1; 
    else if(c == '+') return 2; 
    else if(c == '-') return 2; 
    else if(c == '*') return 3; 
    else if(c == '/') return 3; 
    
}
