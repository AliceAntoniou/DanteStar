##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	src/solver.c	\
		src/map.c

SRC_MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	 $(SRC_MAIN:.c=.o)

TESTS	=	tests/test_solver.c

BINARY_TEST	=	unit_tests

LDFLAGS	=	-L../lib/ -lmy

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I../include/ -g

CRITFLAGS	=	-lcriterion --coverage

HTMLFLAGS	=	--html --html-detail -o website_test.html --html-title Test_criterion

PATH_COVERAGE	=	coverage/

NAME	=	solver

all:	$(OBJ)	$(OBJ_MAIN)
	make -s -C ../lib/my
	gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)

tests_run:
	make -s -C ../lib/my
	mkdir -p $(PATH_COVERAGE)
	gcc -o $(BINARY_TEST) $(SRC) $(TESTS) $(CRITFLAGS) $(LDFLAGS) $(CPPFLAGS) $(CFLAGS)
	./$(BINARY_TEST) > /dev/null
	mv *.gc* $(PATH_COVERAGE)
	$(RM) $(BINARY_TEST)

coverage:	tests_run
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

html:	tests_run
	gcovr $(HTMLFLAGS) -r ./ --exclude tests/
	/usr/bin/firefox website_test.html

clean:
	rm -f $(NAME)

tclean:
	rm -f $(PATH_COVERAGE)*

fclean:	clean	tclean
	make -s -C ../lib/my fclean
	rm -f $(OBJ) $(OBJ_MAIN)
	rm -f $(PATH_COVERAGE)*
	rm -f *.html
	rm -f vgcore*
	rm -f *.gc*

re: fclean all

.PHONY: re fclean tclean clean coverage tests_run all
