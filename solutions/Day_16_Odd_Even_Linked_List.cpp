//pprockys;
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return head;
        else if(head->next==NULL)
            return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *temp=head;
        ListNode *on=odd->next;
        ListNode *en=even->next;
        int k=0;
        int x=0,y=0;
        while(temp!=NULL)
        {
            if(k)
            {
                if(x==0)
                {x=1;en=temp;}
                else
                { en->next=temp;en=temp;}  
                k=0;
            }
            else
            {
                if(y==0){y=1;on=temp;}
                else
                {
                    on->next=temp;
                    on=temp;
                }
                k=1;
            }
            temp=temp->next;
        }
        
        if(on)on->next=even;
        if(en)en->next=NULL;
        return odd;
    }
};
