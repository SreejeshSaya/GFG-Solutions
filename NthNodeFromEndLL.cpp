//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       Node* f, *s;
       f = s = head;
       int i;
       for(i=0; i<n && f; ++i) f = f->next;
       if(i != n) return -1;
       
       while(f) {
           s = s->next;
           f= f->next;
       }
       
       return s->data;
}