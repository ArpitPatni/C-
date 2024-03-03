
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            ListNode*forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        int sum=0;
        int carry=0;
        ListNode* ans=new ListNode();
        while(l1!=NULL || l2!=NULL){
            if(l1){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
            }
            ans->val=sum%10;
            carry=sum/10;

            ListNode*newNode=new ListNode(carry);
            newNode->next=ans;
            ans=newNode;
            sum=carry;
        }
      return carry==0?ans->next:ans;
    }
};