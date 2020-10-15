Ryan McGuiness

rcm421@lehigh.edu

Corey Montella

CSE-109

August 7,2019

# Programming Assignment 3

# Build Instructions
This project is composed of 3 files that are inter dependant on eachother. 
## Linked List
- Linked list is the lowest class. Hash and main both used linked list to construct linked lists and use its functions to insert and remove data. A linked list is a series of Nodes that all point to one another. The insert_head method creates a new node, and saves it as the new head. It takes the old head and sets it equal to the pointer of the new added node.
- bool insert_tail(unsigned int data) – insert a node at the end of the list
- bool insert_head(unsigned int data) – insert a node at the start of the list
- bool insert_at_index(unsigned int index, unsigned int data) – insert a node at the given index
- bool remove_head() – remove the head node, making the second node the head
- bool remove_tail() – remove the last node of the linked list
- bool remove_at_index(unsigned int index) – remove the node at the given index
- unsigned int find(unsigned int data) – returns the index of the node that first contains the given
data. Returns -1 if the node is not found in the linked list.
- unsigned int length() – returns the number of nodes in the linked list
## Hash Set
- The hash set is a vector with a node in each index pointing to a linked list. The hash set method uses the linked list class to maintain its linked lists. 
- bool contains(unsigned int key) – returns true if the hash set contains the supplied key, false otherwise
- bool insert(unsigned int key) – inserts the given key into the hash set. Returns true on success, false otherwise
- bool remove(unsigned int key) – removes the given key from the hash set. Returns true on success, false otherwise
- std::vector<LinkedList*> table – this is the main data structure of the hash set, an array of linked lists.
- unsigned int size – the length of the hash set
- static unsigned int hash_str(string string) – takes a String and returns an integer
- static unsigned int hash(unsigned int prehash) – takes a pre-hashed integer and returns an index
in the hash set

## Main
- The main method imports the "urls.text" file, hashes them, and then stores them in an integer arrray.
- The main then takes this array an puts it into a linked list and records the time to insert and find, then prints out the data recorded.
- It then does the same to Hash sets exect we make 4 different hash sets with 4 different amount of bins. 


# User Instructions
- make - compiles
- ./final - runs executable

# Write-up
- I used the given hash function to hash my URLs.
- I found that the linked list and the hash have an insertion time of O(1). 
- The find time for linked list was O(n) and the find for hash set was closer to O(1) with less bins, and closer to O(n) with more bins.
- The Theory states that my finding, although differet, are close to what was expected to happen.
- The possible factors of diffences in my runtime and expected runtime are:
	- Bad code (doubtful)
	- Ineffecient Hash/prehash function
	- Computer working in the background could slow down runtime
	- 
