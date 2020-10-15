#ifndef HashSet_h
#define HashSet_h
#include "linked_list.h"
class HashSet{
   public:
      HashSet();
      HashSet(int size);
      ~HashSet(); 
      
      bool contains(unsigned int key);
      bool insert(unsigned int key);
      bool remove(unsigned int key);
      static unsigned int hash_str(std::string str);
      unsigned int hash(unsigned int prehash);

   private:
      std::vector<LinkedList*> table;
      unsigned int size;
   
};

#endif
