//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1#

int getMiddle(Node *head)
{
   // Your code here
   Node* p=head;
   Node* q=head;
   while(p && p->next!=NULL){
       p=p->next->next;
       q=q->next;
   }
   return q->data;
}
