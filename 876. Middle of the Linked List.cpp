// Hello world

#include <iostream>
using namespace std;
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head->next == nullptr)
            return head;
        ListNode *next = head->next;
        if (next->next == nullptr)
            return next;
        ListNode *ahead = head->next->next;

        while (ahead->next != nullptr && ahead->next->next != nullptr)
        {
            next = next->next;
            ahead = ahead->next->next;
        }
        if (ahead->next != nullptr)
        {
            return next->next;
        }
        else
        {
            return next;
        }
    }
};