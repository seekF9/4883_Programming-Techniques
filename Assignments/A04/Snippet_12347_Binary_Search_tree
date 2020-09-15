```cpp
struct Tree{
    int val = 0;
    Tree *L = nullptr;
    Tree *R = nullptr;
};
Tree *Insert(Tree *H, int node)
{
    Tree *N = new Tree;
    N->val = node;

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
void Post_Order(Tree *Root)
{
    if (Root == nullptr) return;
    Post_Order(Root->L);
    Post_Order(Root->R);
    printf("%d\n", Root->val);
}
int main()
{
    Tree *head = nullptr;
    int node;
    while (scanf("%d", &node) != EOF)
        head = Insert(head,node);
    Post_Order(head);
    return 0;
```
