all: final

final: main hash linked
	g++ -Iinclude ./hash ./link ./main -o final

main: ./src/main.cpp
	g++ -Iinclude -o main -c ./src/main.cpp

hash: ./src/hash_set.cpp
	g++ -Iinclude -o hash -c ./src/hash_set.cpp 

linked: ./src/linked_list.cpp
	g++ -Iinclude -o link -c ./src/linked_list.cpp

clean:ols
	rm *o final