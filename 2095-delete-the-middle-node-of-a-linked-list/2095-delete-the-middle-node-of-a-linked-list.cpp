/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if((!head) || (head -> next == NULL))
        {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* prev = head;
        ListNode* mid = head;
        int c = 0;
        while(curr -> next != NULL)
        {
            if(c == 0)
            {
                prev = mid;
                mid = mid -> next;
                c = 1;
            }    
            else
            {
                c = 0;
            }
            curr = curr -> next;
        }
        prev -> next = mid -> next;
        return head;
    }
};