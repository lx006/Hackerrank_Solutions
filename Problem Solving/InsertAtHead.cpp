SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *temp = llist;
    if(llist==NULL)
    {
        llist= new SinglyLinkedListNode(data);
        return llist;
    }
    else
    {
        llist = new SinglyLinkedListNode(data);
        llist->next=temp;
        return llist;
    }


}


//Alternative code using standard template library

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
#include<iterator>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    list<int> list1;
    int n;
    cin>>n;
    while(n!=0)
    {
        int i;
        cin>>i;
        list1.push_front(i);
        n--;
    }   
    list<int> :: iterator it=list1.begin();
    while(it!=list1.end())
    {
        cout<<*it<<endl;
        it++;
    }
    return 0;
}
