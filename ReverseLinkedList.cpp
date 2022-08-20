#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
   ListNode(int x)
   {
      val = x ;
      next=NULL;
   }
};
class Solution 
{
    public:
     ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nextptr;
        
        while(curr!=NULL){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
   

};
int main()
{
  ListNode *n1 = new ListNode(5);
  ListNode *n2 = new ListNode(4);
  ListNode *n3 = new ListNode(2);
  ListNode *n4 = new ListNode(9);
  ListNode *n5 = new ListNode(6);
  ListNode *n6 = new ListNode(3);
  ListNode *n7 = new ListNode(1);
  ListNode *n8 = new ListNode(12);
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = n6;
  n6->next = n7;
  n7->next = n8;
  Solution s;
  ListNode * res = s.reverse(n1);
  ListNode * temp = res;
  while(temp!=NULL)
  {
    cout<<temp->val<<" ";
    temp=temp->next;
  }


}
