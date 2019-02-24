CXX = c++

SRC = source/hello.cc main.cc
OBJ = $(SRC:.cc=.o)

%.o:%.cc
	$(CXX)  -o $@ -c $< -Iinclude

all: hello.so

hello.so: $(OBJ)
	$(CXX) -o $@ $^

src/hello.o: include/hello.h

clean:
	@rm -f *~ */*~ hello.so src/*.o main.o

.PHONY: clean all format