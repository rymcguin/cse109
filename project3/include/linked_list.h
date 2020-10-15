#ifndef LinkedList_h
#define LinkedList_h

class Node{
public:
  Node();
	Node(unsigned int data);
  ~Node();
	Node* next;
	int data;
};

class LinkedList{
public:
  LinkedList();
	
  ~LinkedList();
	bool insert_tail(unsigned int data);
	bool insert_head(unsigned int data);
	bool insert_at_index(unsigned int index, unsigned int data);
	bool remove_tail();
	bool remove_at_index(unsigned int index);
	unsigned int find(unsigned int data);
	unsigned int getLength();
private:
		int length;
    Node* head;
	Node* tail;
};


#endif
