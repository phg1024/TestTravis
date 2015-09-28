all:
	g++ -c vec.cpp

test:
	g++ test_vec.cpp -o test_vec
	./test_vec
