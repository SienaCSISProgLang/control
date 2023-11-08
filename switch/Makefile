# Makefile for shortcut switch example program
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=switch.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

switch:	$(OFILES)
	$(CC) -o switch $(OFILES)

clean::
	/bin/rm -f switch $(OFILES)
