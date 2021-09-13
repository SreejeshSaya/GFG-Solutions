class Solution {
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        Node* slo = head;
        Node* fas = head;
        while(fas && fas->next) {
            fas = fas->next->next;
            slo = slo->next;
            if(slo == fas) {
                slo = head;
                while(slo != fas) {
                    slo = slo->next;
                    fas = fas->next;
                }
                fas = slo;
                while(fas->next != slo) {
                    fas = fas->next;
                }
                fas->next = nullptr;
            }
        }
    }
};