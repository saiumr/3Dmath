SRC=src
INCLUDE=include
all: target

target:
	g++ $(SRC)/main.cpp $(SRC)/vector3.cpp -o main.exe -I$(INCLUDE)

run:
	@.\main.exe

clean:
	@del *.exe

.PHONY: run clean