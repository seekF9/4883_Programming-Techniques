// 11988 - Broken Keyboard
// Date: 10/07/2020
// UVA accepted code


#include <deque>
#include <iostream>
#include <string>

using namespace std;

// Function that checks to put the string in the front of the queue or at the back. 
void Push(string &str, deque<string> &queue_2, bool check) {
  if (!str.empty()) {
    if (check) {
      queue_2.push_front(str);
    } else {
      queue_2.push_back(str);
    }
    str.clear();// clear the string
  }
}

//Driver code
int main() {
  // character variable that holds the char value in 
  // each line of the input file. 
  char ch = 0, prev_ch = 0;
  while ((ch = getchar()) != EOF) 
  {// while loop reads each char in a line until it 
  // reaches the end of the file. 
    string str;
    if (ch != '[' && ch != ']') str += ch;

    deque<string> deque_1;
    bool check = false;
    
    while ((ch = getchar()) != '\n') {
      if (ch == '[' || ch == ']') 
      {// if the char is '[' we push the string at the front
        Push(str, deque_1, check);

        if (ch == '[') check = true;
        else check = false;
        
      } 
      else 
        str += ch;// characters in a line is added to a string. 
      
      prev_ch = ch;
    }
    if (prev_ch != '[' && prev_ch != ']') Push(str, deque_1, check);
  
  //Output
  // prints the complete string that has been stored in the queue. 
    for (auto d : deque_1) cout << d;

    puts("");
  }
  return 0;
}
