#
# Zero-Copy Challenge Makefile
# 
# Change EXEC_NAME to your example, the rest may be left alone. 
# Sources can be in the root directory, or src.
# Included files may be in the root directory, or inc.

EXEC_NAME := word_count

#------------------------------------------------------------------------------#

CC := cc
CFLAGS := -O0 -Wall -Iinc

LDFLAGS :=
LIBRARIES :=

SOURCES := $(wildcard *.c) $(wildcard src/*.c)
OBJECTS := $(SOURCES:.c=.o)

.PHONY: all clean

all: $(EXEC_NAME)

clean:
	$(RM) $(OBJECTS) $(EXEC_NAME)

$(EXEC_NAME): $(OBJECTS)
	$(CC) $(LDFLAGS) $(CFLAGS) $(OBJECTS) -o $@ $(LIBRARIES)

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@
