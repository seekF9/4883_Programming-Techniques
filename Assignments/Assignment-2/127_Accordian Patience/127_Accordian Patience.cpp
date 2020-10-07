// 11172 - Relational Operator
// Date: 10/07/2020
// UVA accepted code

#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

// Function that checks to see if the the first char of a stirng in the input file matches 
// with the other.
// return : boolean value, True or False.
bool match(string &a, string &b){
 return a[0] == b[0] || a[1] == b[1];
}

int main()
{
 string card;// variable that stores individual card from the program.
 int i = 0; // counter that increments to reach a loop limit.

 while (cin >> card&&card != "#")
 {// the loop stops when there is a character '#' in the input file. 

  vector<stack<string> > deck(52);
  deck[0].push(card);
  i = 1; 
  while( i < deck.size())
  {// reads the card until the decks are filled. 
   cin >> card;
   deck[i].push(card);
   i++; 
  }

   // The cards are arranged and gaps are filled
   // The cards are compared to check if it matches with a boolean function. 
  for (int j = 0; j < deck.size(); j++){
   if (j - 3 >= 0 && match(deck[j - 3].top(), deck[j].top())){
    deck[j - 3].push(deck[j].top());
    deck[j].pop();
    if (deck[j].empty()) deck.erase(deck.begin() + j);
    j = 0;
   }
   else if (j - 1 >= 0 && match(deck[j - 1].top(), deck[j].top())){
    deck[j - 1].push(deck[j].top());
    deck[j].pop();
    if (deck[j].empty()) deck.erase(deck.begin() + j);
    j = 0;
   }
  }

  // output 
  cout << deck.size() << " pile";
  if (deck.size() != 1) cout << 's';// prints s for more than 1 pile.
  cout<<" remaining: ";
  for (int j = 0; j < deck.size()-1; j++){
   cout << deck[j].size() << ' ';
  }
  cout << deck.back().size() << endl;
 }
 return 0;
}
