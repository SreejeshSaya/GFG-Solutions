class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       Node* n=del->next;
       del->data=n->data;
       del->next=n->next;
    }

};