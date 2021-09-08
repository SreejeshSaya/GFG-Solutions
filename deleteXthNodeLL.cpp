Node* deleteNode(Node *head,int x) {
    if(x == 1) return head->next;
    
    int i=1;
    Node *h = head;
    for(int i=1; i<x-1; ++i) h=h->next;
    // h->next is the element to be deleted
    Node *t = h->next;
    h->next = t->next;
    return head;
}