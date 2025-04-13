class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow= head, *first=head;

        while(first && first->next){
        slow= slow->next;
        first=first->next->next;

        if(slow== first) return true;
        }
        return false;  
    }
};