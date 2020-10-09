// 673 Parentheses Balance
// 10/08/2020
// UVA accepted code

#include <cstdio>
#include <stack>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  //variables used to increment and hold the char from the input.
  int n;
  char str[140];

  //stack created to store the char from the input.
  stack<char> check;

  cin >> n; 
  getc(stdin);// gets the line that reads the number of lines from 
              // the input

  while (n--) 
  {// loop until the end of the line
    
    
    gets(str);//reads the characters in a single line

    // For loop
    // This loop checks the string and checks the string follows
    // the properties set in the question. 
    for (int i = 0; i < strlen(str); i++) 
    { 
      if (str[i] == '(' || str[i] == '[') 
      {
        check.push(str[i]);
      } 
      else if (str[i] == ')') 
      {
        if (check.empty() || check.top() != '('){
          check.push('a');
          break;
        }
        check.pop();
      } 
      else if (str[i] == ']') 
      {
        if (check.empty() || check.top() != '['){
          check.push('a');
          break;
        }
        check.pop();
      }
    }

    // output
    if(check.empty()) printf("Yes\n");
    else printf("No\n");
  }

  return 0;
}
