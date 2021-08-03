
    
void printLinkedList(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }    

}


//alternative code using standard template library in c++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
#include<iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    list<int> list1; 
    int n;
    cin>>n;
    while(n!=0)
    {
        int i;
        cin>>i;
        list1.push_back(i);
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


