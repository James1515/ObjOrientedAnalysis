#==========================================================================
#Author: James Anthony Ortiz
#File: makefile
#Description: Makefile for all Section 2 Object-Oriented Analysis Problems
#===========================================================================

CC = g++
CFLAGS = -I.
DEPS = dive.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dive: dive.o main.o
	$(CC) -o dive dive.o main.o
 
