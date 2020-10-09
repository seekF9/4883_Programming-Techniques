// 12347 - Binary tree problem 
// 10/ 08 / 2020
// UVA accepted
 
#include <cstdio>

using namespace std;

// structure : Tree
// public:
//        int val, 
//        Tree pointer *L,*R
struct Tree{
    int val = 0;
    Tree *L = nullptr;
    Tree *R = nullptr;
};

//Function :: Insert
// input : struct tree 
//          int 
// return : Tree pointer
Tree *Insert(Tree *H, int node)
{
    Tree *N = new Tree;// new instance of a tree structure
    N->val = node;// put the new value in the tree node

    if (H == nullptr) return N;

    Tree *T = H, *nxt = H;
    while (nxt != nullptr) {
        T = nxt;
        if (node > nxt->val) nxt = nxt->R;
        else nxt = nxt->L;
    }
    if (node > T->val) T->R = N;
    else T->L = N;
    return H;
}


// Function :: Post_Order 
// input : Tree struct
// returns : null 
// This function prints the numbers in a post order formation
// inside a binary tree. 
void Post_Order(Tree *Root)
{
    if (Root == nullptr) return;
    Post_Order(Root->L);
    Post_Order(Root->R);
    printf("%d\n", Root->val);
}

///////////////////////////////////////////////////////////////////////
// Driver code
int main()
{
    Tree *head = nullptr;
    int node;
    
    // While loop 
    // reads the numbers from the input file and then inserts 
    // values inside a binary tree. 
    while (scanf("%d", &node) != EOF)
        head = Insert(head,node);
    // OUTPUT
    Post_Order(head);
    return 0;
}
