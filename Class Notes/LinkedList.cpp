#include "LinkedList.h"

LinkedList::LinkedList(){
    length = 0;
    head = NULL;
    tail = NULL;
}

ListNode::ListNode(int value){
    this->value = value;
    next = NULL;
}
void LinkedList::insert(int value){
    if(head == NULL){
        head = new ListNode(value);
        tail = head;
    }else{
        ListNode* new_node = new ListNode(value);
        tail -> next = new_node;
        tail = new_node;
    }
}

void LinkedList::find(int value){
    return false;
}
void LinkedList::print(){

}