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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long int s=0,c=0;
        
        ListNode*head=new ListNode(0);
        ListNode*te=head;
        
        while(l1||l2)
        {
            s=((l1) ? l1->val : 0);
            s += ((l2) ? l2->val : 0) + c;
            te->next=new ListNode(s%10);
            te=te->next;
            
            c=s/10;
            if(l1)
            l1=l1->next;
            
            if(l2)
            l2=l2->next;
        }
        
        while(c)
        {
            te->next=new ListNode(c%10);
            c=c/10;
            te=te->next;
        }
        
        return head->next;
    }
};