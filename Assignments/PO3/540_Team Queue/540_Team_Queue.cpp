#include <iostream>
#include <queue>

using namespace std;

int Max[1000001];// each number is stored in the index max
queue<int> Team_1[1001];// the number of members in a group is stored
int main()
{
    int T = 1;
    int numTeams, numElem;

    while (cin >> numTeams, numTeams)
    {
        for (int t = 0; t < numTeams; ++t)
        {
            while (!Team_1[t].empty())// clears the deque for putting new set of numbers.
                Team_1[t].pop();
            
            cin >> numElem;
            while (numElem--)
            {
                int elem;
                cin >> elem;
                Max[elem] = t;
            }
        }
        
        queue<int> Final_queue;
        
        cout << "Scenario #" << T++ << '\n';
        string command;
        while (cin >> command, command[0] != 'S')
        {
          int team; 
            if (command[0] == 'E')// stores the number in the queue.
            {
                num;
                cin >> num;
                int team = Max[num];
                if (Team_1[team].empty())
                {
                    Final_queue.push(team);
                }
                
                Team_1[team].push(num);
            }
            else                  // removes the numbers from the dequeue
            {
                team = Final_queue.front();
                cout << Team_1[team].front() << '\n';
                Team_1[team].pop();
                if (Team_1[team].empty())
                    Final_queue.pop();
            }
        }
        cout << '\n';
    }
}
