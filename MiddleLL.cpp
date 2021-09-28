class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* slo(head), *fas(head);
        while(fas && fas->next) {
            fas = fas->next->next;
            slo = slo->next;
        }
        return slo->data;
    }
};