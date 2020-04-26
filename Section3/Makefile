CC      = gcc
FLAGS   = -Wall -Wextra -Wpedantic
OBJECTS = build/Report.o

link: ${OBJECTS}
	 ${CC} $^ -o build/Report

build/Report.o: Report.c
	${CC} -c ${FLAGS} $< -o $@

clean:
	rm -rf ./build && mkdir -p build/lib

run:
	./build/Report

run-task-1:
	tail access.log
run-task-2:
	grep -E -o "([0-9]{1,3}[\.]){3}[0-9]{1,3}" access.log | sort | uniq
run-task-3:
	grep -o -E ".* [4]{1}[0]{1}[4]{1} .*" access.log | grep -o -P "GET(.*)HTTP/1.1"
run-task-4:
	grep -E -o ".* MSIE .*" access.log >access.ie.log
run-task-5:
	grep -E -o ".* [0-9]{0,1}[0-9]{0,1}[0,9]{0,1} (5|6|7|8|9|1[0-9]) .*" access.log >access5mil.log

