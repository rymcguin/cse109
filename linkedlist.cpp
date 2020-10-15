//Ryan McGuiness
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Node{
public:
	Node* next;
	int data;
    
};
char menu();
bool isEmpty(Node *&head);
void insertAsFirstElement(Node *&head, Node *&last, int number);
void insert (Node *&head, Node *&last, int number);
void remove(Node *&head, Node *&last);
void showList(Node *current);
char menu(){

}
bool isEmpty(Node *head){
	if(head == NULL)
		return true;
	else
	{
		return false;
	}
	
}
void insertAsFirstElement(Node *&head, Node *&last, int number){
	Node *temp = new node;
	temp->number = number
	temp->next = NULL;
	head = temp;
	last = temp;
}
void insert (Node *&head, Node *&last, int number){
	if(isEmpty(head))
		insertAsFirstElement(head,last,number);
	else
	{
		Node *temp = new Node;
		temp->number = number;
		temp->next = NULL;
		last->next = temp;
		last = temo;

	}
	
}
void remove(Node *&head, Node *&last){
	if(isEmpty(head))
		cout<< "The list is Empty"<<end;
	else if (head == last)
	{
		delete head;
		head == NULL;
		last == NULL;
	}
	else
	{
		Node *temp = head;
		head = head->next;
		delete temp;
	}
	
}
void showList(Node *current){
	if(isEmpty(head))
		cout<< "The list is Empty"<<endl;
	else{
		cout<<"The list contains: \n";
		while(curent!=NULL)
		{
			cout<<curent->number<< endl;
			current = number->next;
		}
	}
}

int main(){
	LinkedList* list = new LinkedList();
	Node *head = NULL;
	Node *last = NULL;
}
