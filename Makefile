run-task-1:
	echo “The quick brown fox jumps over the lazy dog” | wc -w
run-task-2:
	echo “The quick brown fox jumps over the lazy dog” | tr a-z A-Z
run-task-3:
	curl -o dkit.html https://www.dkit.ie/
run-task-4:
	{ head -n 1 dkit.html; tail -n 1 dkit.html; } | tr '<>' '[]' | sort -r >Mangled.txt
run-task-5:
	egrep -xo '^#.[0-9a-f]{5,7}' colours.txt
run-task-6:
	egrep -xo '^#.[0-9a-f]{5,7}' colours.txt | cut -c 4,5 | ./Hex
run-task-7:
	egrep -xo '^#.[0-9a-f]{5,7}' colours.txt
run-task-8:
	tail access.log
run-task-9:
	grep -E -o "([0-9]{1,3}[\.]){3}[0-9]{1,3}" access.log | uniq
run-task-10:
	grep -o -E ".* [4]{1}[0]{1}[4]{1} .*" access.log | grep -o -P "GET(.*)HTTP/1.1"
run-task-11:
	grep -E -o ".* MSIE .*" access.log >access.ie.log
	
