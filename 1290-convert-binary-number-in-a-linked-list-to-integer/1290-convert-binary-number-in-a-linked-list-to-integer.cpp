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
    vector<int> v;
    void fun(ListNode* head)
    {
        if(head==NULL)
            return;
        fun(head->next);
        v.push_back(head->val);
    }
    int getDecimalValue(ListNode* head) {
        fun(head);
        int bn=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=0)
            bn+=(v[i]*pow(2,i));
        }
        return bn;
    }
};