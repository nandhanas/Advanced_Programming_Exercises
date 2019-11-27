CXX = c++
SRC = source/hello.cc main.cc
OBJ = $(SRC:.cc=.o)

%.o:%.cc
	$(CXX)  -o $@ -c $< -I include

all: hello.so

hello.so: $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *~ */*~ hello.so source/*.o main.o

.PHONY: clean all format
