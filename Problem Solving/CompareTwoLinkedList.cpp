bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    bool i;
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data==head2->data)
        {
            i=1;
        }
        else 
        {
            i=0;
            return i;
        }
        head1=head1->next;
        head2=head2->next;
        
    }
    if((head1==NULL&&head2!=NULL)||(head2==NULL&&head1!=NULL))
    {
        return 0;
    }
    return i;


}
