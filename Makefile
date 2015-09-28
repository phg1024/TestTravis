get-deps:

all:
	g++ -c vec.cpp

test: all
	g++ test_vec.cpp -o test_vec
	./test_vec
