struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *turtle, *hare;
        turtle = head;
        hare = head;
        while(hare!=nullptr) {
            turtle = turtle->next;
            hare = hare->next;
            if(hare) 
                hare=hare->next;
            else break;
            if(turtle == hare) return true;
        }
        return false;
    }
};