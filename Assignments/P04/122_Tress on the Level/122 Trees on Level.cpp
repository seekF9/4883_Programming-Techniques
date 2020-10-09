// 122 - Trees on level
// 10/08/2020
// UVA accepted answer

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

bool Contain_p(const set<string> &Po_1);

// struct : Node
// public: long num, 
//         string posi_1ition
//         bool operator
struct Node
{    
    long long num;
    string point_;
    
    bool operator<(const Node &other) const
    {
        // Print inital 
        if (point_.size() != other.point_.size())
            return point_.size() < other.point_.size();
        
        return point_ < other.point_;
    }
};

Node nodes[260];

// Driver code
int main()
{
    set<string> Po_1;
    char F_1, comma;
    
    while (cin >> F_1 >> nodes[0].num >> comma >> nodes[0].point_)
    {
        Po_1.clear();
        
        // Remove the bracket
        nodes[0].point_ = nodes[0].point_.substr(0, nodes[0].point_.size()-1);
        Po_1.insert(nodes[0].point_);
        
        int posi_1 = 1;
        
        bool valid = true;
        
        while (cin >> F_1, cin.peek() != ')')
        {// read until the limit ')' is reached.

            cin >> nodes[posi_1].num >> comma >> nodes[posi_1].point_;
            
            // Remove the bracket
            nodes[posi_1].point_ = 
                nodes[posi_1].point_.substr(0, nodes[posi_1].point_.size()-1);
            
            if (Po_1.find(nodes[posi_1].point_) != Po_1.end())
                valid = false;
            
            Po_1.insert(nodes[posi_1].point_);
            
            ++posi_1;
        }
        
        // Remove the ) at the end
        cin.ignore();
        
        //OUTPUT
        if (valid && Contain_p(Po_1))
        {
            sort(nodes, nodes + posi_1);
        
            cout << nodes[0].num;
            for (int i = 1; i < posi_1; ++i)
                cout << ' ' << nodes[i].num;
            cout << '\n';
        }
        
        else
        {
            cout << "not complete\n";
        }
    }
}


// Function Contain_p
// return : boolean value
bool Contain_p(const set<string> &Po_1)
{
    for (set<string>::iterator iter = Po_1.begin(); 
        iter != Po_1.end(); ++iter)
    {
        if (*iter != "")
        {
            string str_1 = iter->substr(0, iter->size()-1);
            if (Po_1.find(str_1) == Po_1.end())
                return false;
        }
    }
    
    return true;
}
