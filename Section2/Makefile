CC      = gcc
FLAGS   = -Wall -Wextra -Wpedantic
OBJECTS = build/HexToRGB.o

link: ${OBJECTS}
	${CC} $^ -o build/HexToRGB

build/HexToRGB.o: HexToRGB.c
	${CC} -c ${FLAGS} $< -o $@

clean:
	rm -rf ./build && mkdir -p build/lib

run:
	./build/HexToRGB

run-task-1:
	egrep -xo '^#.[0-9a-f]{5,7}' colours.txt
run-task-2:
	egrep -xo '^#.[0-9a-f]{5,7}' colours.txt | cut -c 4,5 | ./Hex
run-task-3:
	make && egrep -xo '^#.[0-9a-f]{5,7}' colours.txt | ./build/HexToRGB
