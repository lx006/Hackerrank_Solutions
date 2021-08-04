void reversePrint(SinglyLinkedListNode* llist) 
{
    SinglyLinkedListNode *current = llist,*prev=NULL,*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    llist=prev;
    SinglyLinkedListNode *temp=llist;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    

}
