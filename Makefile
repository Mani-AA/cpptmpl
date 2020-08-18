compile:
	clang++ -std=c++17 -stdlib=libc++ -g main.cpp -o main
run:
	./main
all:
	make compile && make run
