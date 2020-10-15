Ryan McGuiness

Corey Montella

CSE-109

August 7,2019

# Programming Assignment #3
# 
Your hash set will have the following public methods:
- bool contains(unsigned int key) – returns true if the hash set contains the supplied key, false otherwise
- bool insert(unsigned int key) – inserts the given key into the hash set. Returns true on success, false otherwise
- bool remove(unsigned int key) – removes the given key from the hash set. Returns true on success, false otherwise
It will also have the following private members:
- std::vector<LinkedList*> table – this is the main data structure of the hash set, an array of linked lists.
-  unsigned int size – the length of the hash set It will also have the following static functions:
- static unsigned int hash_str(string string) – takes a String and returns an integer
-  static unsigned int hash(unsigned int prehash) – takes a pre-hashed integer and returns an index
in the hash set