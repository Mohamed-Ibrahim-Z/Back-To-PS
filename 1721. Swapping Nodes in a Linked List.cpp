#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *swapNodes(ListNode *head, int k)
{
    k-=1;
    vector<ListNode *> v;
    ListNode *node = head;
    while (node != nullptr)
    {
        v.push_back(node);
        node = node->next;
    }
    int tempVal = v[k]->val;
    v[k]->val = v[v.size() - k-1]->val;
    v[v.size() - k-1]->val = tempVal;
    node = head;
    int i=0;
    while (node != nullptr)
    {
        node = v[i];
        node = node->next;
        i++;
    }
    return head;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    swapNodes(head, 2);
}
