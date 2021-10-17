##
## EPITECH PROJECT, 2021
## B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
## File description:
## Makefile
##

CC	=	g++
CXXFLAGS	=	-std=c++14 -Wall -Wextra -Werror -Iincludes/ -g

SRC	=	sources/Toys/LittlePony.cpp	\
		sources/Toys/Teddy.cpp	\
		sources/Toys/Toy.cpp	\
		sources/Workspace/PapaXmasConveyorBelt.cpp	\
		sources/Workspace/PapaXmasTable.cpp	\
		sources/Workspace/TableRand.cpp	\
		sources/Wraps/Box.cpp \
		sources/Wraps/GiftPaper.cpp \
		sources/Wraps/Wrap.cpp \
		sources/IElf.cpp	\
		sources/Object.cpp	\
		main.cpp

OBJ	=	$(SRC:.cpp=.o)
EXEC	=	test

all:	$(EXEC)

$(EXEC):	$(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $(OBJ)

tests_run:
	g++  $(OBJ) tests/*.cpp -o unit_tests --coverage -lcriterion -Iincludes/
	- ./unit_tests

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(EXEC)

re:	fclean all

.PHONY:	clean fclean re all