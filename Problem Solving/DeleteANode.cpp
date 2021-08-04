SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) 
{
    SinglyLinkedListNode *temp1,*temp = llist;
    if(position==0)
    {
        llist=temp->next;
        delete temp;
        return llist;
    }
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    temp1=temp->next->next;
    delete temp->next;
    temp->next=temp1;
    return llist;    

}
