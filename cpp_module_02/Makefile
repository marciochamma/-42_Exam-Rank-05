

CC = c++ -std=c++98 -Werror -Wextra -Wall
FILE = main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp \
	Fireball.cpp Polymorph.cpp BrickWall.cpp SpellBook.cpp TargetGenerator.cpp

all:
	$(CC) $(FILE) -I.
	clear
	./a.out | cat -e
	@rm -r a.out

leak:
	$(CC) $(FILE) -I.
	clear
	valgrind ./a.out | cat -e
	@rm -r a.out

file:
	$(CC) $(FILE) -I.
	clear
	./a.out | cat -e > file.txt
	@rm -r a.out