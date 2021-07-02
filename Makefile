##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

TESTS	=	tests/test_solver.c	\
			tests/test_generator.c

BINARY_TEST	=	unit_tests

LDFLAGS	=	-Llib/ -lmy

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-Iinclude/

CRITFLAGS	=	-lcriterion --coverage

PATH_COVERAGE	=	coverage/

NAME	=	matchstick

GENERATOR	=	./generator/generator

SOLVER	=	./solver/solver

MAP	=	map.txt

all:	$(OBJ)	$(OBJ_MAIN)
	make -s -C lib/my
	make -C generator
	make -C solver

gensolv:	all
	$(GENERATOR) 100 50 > $(MAP)
	$(SOLVER) $(MAP)

tests_run:
	make -s -C lib/my
	make -s -C generator/ tests_run
	make -s -C solver/ tests_run

coverage:	tests_run
	make -s -C generator/ coverage
	make -s -C solver/ coverage

html: tests_run
	make -s -C generator/ html
	make -s -C solver/ html

normez:	fclean
	ruby NormEZ.rb -f

clean:
	make -C generator clean
	make -C solver clean

tclean:
	$(RM) $(PATH_COVERAGE)*

fclean:	clean	tclean
	make -C lib/my fclean
	make -C generator fclean
	make -C solver fclean
	$(RM) $(PATH_COVERAGE)*
	$(RM) map.txt
	$(RM) vgcore*
	$(RM) *.gc*

re: fclean all

.PHONY: re fclean tclean clean coverage tests_run all
