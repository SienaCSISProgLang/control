# Makefile for gotowhile/gotofor example programs
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=gotowhile.c gotofor.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

all::	gotowhile gotofor

gotowhile:	gotowhile.o
	$(CC) -o gotowhile gotowhile.o

gotofor:	gotofor.o
	$(CC) -o gotofor gotofor.o

clean::
	/bin/rm -f gotowhile gotofor $(OFILES)
