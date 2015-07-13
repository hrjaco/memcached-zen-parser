# g++ -std=c++0x memcached-zen-parser.cpp memcached-zen.pb.cc -o memcached-zen-parser -pthread -lprotobuf

CC=g++
CFLAGS=-c -Wall -std=c++0x
LDFLAGS=-pthread -lprotobuf
CC_SOURCES=memcached-zen.pb.cc
CXX_SOURCES=memcached-zen-parser.cpp
SOURCES=$(CXX_SOURCES) $(CC_SOURCES)
OBJECTS=$(CXX_SOURCES:.cpp=.o) $(CC_SOURCES:.cc=.o) 
EXECUTABLE=memcached-zen-parser

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o $(EXECUTABLE)
