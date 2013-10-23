CC=g++
CFLAGS=-Wall -std=c99
LDFLAGS=
SOURCES=main.cpp
SOURCES+=../worker.cpp
SOURCES+=../per.cpp
SOURCES+=../trader.cpp
SOURCES+=../order.cpp
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=wektorek

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
