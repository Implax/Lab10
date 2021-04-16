
output: testStabLineProg.o
	g++ testStabLineProg.o -o output

testStabLineProg.o: testStabLineProg.cpp
	g++ -c testStabLineProg.cpp

clean:
	rm*.o output
