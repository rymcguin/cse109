all: hash

hash: main.o hash_set.o linked_list.o
	g++ -g main.o hash_set.o linked_list.o -o src

main.o: src/main.cpp
	g++ -c -g -Wall -I lib src/main.cpp 

hash_set.o: src/hash_set.cpp
	g++ -c -g -Wall -I lib src/hash_set.cpp 

linked_list.o: src/linked_list.cpp
	g++ -c -g -Wall -I lib src/linked_list.cpp 

clean:
	rm -r build