struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    struct Node* reverseList(struct Node* head) {
        struct Node *prev = nullptr;
        struct Node *cur = head;
        struct Node *next;
        while(cur != nullptr) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
	struct Node* addTwoNumbers(struct Node* l1, struct Node* l2) {
		int carry = 0;
		struct Node preHead(0), *p = &preHead;

		while (l1 || l2 || carry) {
			int d1 = 0;
			int d2 = 0;
			if (l1) {
				d1 = (l1->data); // gets digit1
			}
			if (l2) {
				d2 = (l2->data); // gets digit2
			}
			
			int sum = d1+d2+carry;
			
			if (sum >= 10) {
				sum -= 10;
				carry = 1;
			}
			else carry = 0;

			p->next = new struct Node(sum);

			if (l1) {
				l1 = l1->next;
			}
			if (l2) {
				l2 = l2->next;
			}
			p = p->next;
			
		}
		
		return preHead.next;
	}
	
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node *f = reverseList(first);
        struct Node *s = reverseList(second);
        struct Node *sum = addTwoNumbers(f, s);
        return reverseList(sum);
    }
};