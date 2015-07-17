# g++ -std=c++0x memcached-zen-parser.cpp memcached-zen.pb.cc -o memcached-zen-parser -pthread -lprotobuf

# CC=g++
# CFLAGS=-c -Wall -std=c++0x
# LDFLAGS=-pthread -lprotobuf
# CC_SOURCES=memcached-zen.pb.cc
# CXX_SOURCES=memcached-zen-parser.cpp
# SOURCES=$(CXX_SOURCES) $(CC_SOURCES)
# OBJECTS=$(CXX_SOURCES:.cpp=.o) $(CC_SOURCES:.cc=.o)
# EXECUTABLE=memcached-zen-parser

# all: $(SOURCES) $(EXECUTABLE)

# $(EXECUTABLE): $(OBJECTS)
# 	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

# .cpp.o:
# 	$(CC) $(CFLAGS) $< -o $@

# clean:
# 	rm *.o $(EXECUTABLE)

CC=g++
C=gcc
CFLAGS=-g -c -Wall -std=c++0x
LDFLAGS=-pthread -lprotobuf
CC_SOURCES=memcached-zen.pb.cc
CXX_SOURCES=memcached-zen-parser.cpp
SOURCES=$(CXX_SOURCES) $(CC_SOURCES)
OBJECTS=$(CXX_SOURCES:.cpp=.o) $(CC_SOURCES:.cc=.o)
LIB=libmemcached-zen-parser.a
TEST_MAIN=test_main

all: $(SOURCES) $(LIB)

$(LIB): $(OBJECTS)
	ar rcs $(LIB) $(OBJECTS)

$(TEST_MAIN): $(LIB) test_main.o
	$(C) test_main.o $(LIB) /usr/local/lib/libprotobuf.a -lstdc++ -o $@

.c.o:
	$(C) -c $< -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o $(EXECUTABLE)
