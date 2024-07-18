#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next = NULL;
    ListNode(int val,ListNode* next=NULL){
        this->val = val;
        this->next = next;
    }
};

//Time Complexity : O(n)
ListNode* reverseLinkedList(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(curr!=NULL){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    } 
    return prev;
}

int main(){


    int n;//size of the linked list
    cin >> n;

    ListNode* curr = new ListNode(0);
    ListNode* head = curr;

    //creating the linked list
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        curr->next = new ListNode(val);
        curr = curr->next;
    }

    ListNode* revHead = reverseLinkedList(head->next);//reversing the linked list

    ListNode* itr = revHead;//temporary node to iterate the reversed linked list
    while(itr!=NULL){
        cout << itr->val << " ";
        itr = itr->next;
    }
  
    return 0;
}