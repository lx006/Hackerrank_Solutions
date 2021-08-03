SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *temp = llist;
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    newNode->next=temp->next;
    temp->next=newNode;
    return llist;
}
