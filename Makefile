
OUT = main.out

INCL = -I ./includes/ \
	   -I ./appl/

SRC = ./main.cpp \
	  ./src/state.cpp \
	  ./src/globals.cpp \
	  ./appl/demoapp.cpp

OBJ = $(SRC:.cpp=.o)


.PHONY: run
run: build
	./$(OUT)

.PHONY: build
build: 
	g++ $(INCL) $(SRC) -o $(OUT)
