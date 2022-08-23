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
    ListNode* rev(ListNode* head){        
    
		if(head==NULL || head->next==NULL) return head;

		ListNode* prev=NULL, *curr=head;

		while(curr!=NULL){
			ListNode* n=curr->next;
			curr->next=prev;
			prev=curr;
			curr=n;
		}
		return prev;
	}

	bool isPalindrome(ListNode* head) {
    
		if(head==NULL || head->next==NULL) return true;

		ListNode* slow=head, *fast=head->next;     

		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}

		ListNode* ll2_head=slow->next;          
		slow->next=NULL;                        
		ListNode* newhead=rev(ll2_head);        

		while(head!=NULL && newhead!=NULL){     

			if(head->val!=newhead->val) return false;
			head=head->next;
			newhead=newhead->next;
		}

		return true;
	}
};