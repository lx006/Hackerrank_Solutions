SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) 
{
    SinglyLinkedListNode *temp=head;
    if(head==NULL)
    {
        head = new SinglyLinkedListNode(data);
        return head;
    }
    else {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
        temp->next=newNode;
        return head;
    }
}
