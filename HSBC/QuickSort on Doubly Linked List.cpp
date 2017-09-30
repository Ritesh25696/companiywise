/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* a Node of the doubly linked list */
/*struct Node
{
    int data;
    Node *next;
    Node *prev;
};
   struct Node *lastNode(Node *root)
{
    while (root && root->next)
        root = root->next;
    return root;
}
void _quickSort(Node* l, Node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        struct Node *p = partition(l, h);
        _quickSort(l, p->prev);
        _quickSort(p->next, h);
    }
}
 
void quickSort(Node *head)
{
    // Find last Node
    struct Node *h = lastNode(head);
 
    // Call the recursive QuickSort
    _quickSort(head, h);
}*/
Node* partition(Node *l, Node *h){
    Node *j = l->prev;
    int pivot = h->data;
    for(Node* i = l ; i!=h ; i=i->next){
        if(i->data <= pivot){
           j = ( j == NULL )? l: j->next;
            swap(j->data , i->data);
        }
    }
    j = (j == NULL) ? l : j->next;
    swap(j->data , h->data);
    return j;
}
