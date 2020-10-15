//Ryan McGuiness
#include <iostream>
#include <vector>
#include <string>
#include "../include/hash_set.h"
HashSet::HashSet(){
	this->size = 1;
}
unsigned int HashSet::hash(unsigned int prehash){
	return prehash % size;
}
HashSet::HashSet(int size){
   table.resize(size);
	for (int i = 0; i < size; i++){
		this->table[i] = new LinkedList();
	}
	this->size = size;
}
HashSet::~HashSet(){
	for (int i = 0; i < size; i++){
		if (this->table[i] != NULL){
			delete this->table[i];
		}
	}
}
bool HashSet::contains(unsigned int key){
   int hash = this->hash(key);
   bool cont = true;
   if(table[hash]->find(key) == -1){
      cont = false;
   }
	return cont;
}

bool HashSet::insert(unsigned int key){
	int hash = this->hash(key);
	return table[hash]->insert_tail(key);
	
}

bool HashSet::remove(unsigned int key){
	int hash = this->hash(key);
	if (this->contains(key)){
		int index = this->table[hash]->find(key);
		this->table[hash]->remove_at_index(index);
		return true;
	}
	return false;
}
unsigned int HashSet::hash_str(std::string str) {
    unsigned int b = 378551;
    unsigned int a = 63689;
    unsigned int hash = 0;
	 for(std::size_t i = 0; i < str.length(); i++) {
		hash = hash * a + str[i]; 
		a =a*b;
	 }
    return(hash & 0x7FFFFFFF);
}
