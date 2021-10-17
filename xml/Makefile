##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile steal
##
## --------------------------------------------------------------- ##
NAME	=	santa

## --------------------------------------------------------------- ##
PATH_COREWAR	=	./
COREWAR	=	main.cpp					\
			lib/pugixml/pugixml.cpp

## --------------------------------------------------------------- ##
SRC	=	$(addprefix $(PATH_COREWAR), $(COREWAR))

## --------------------------------------------------------------- ##
REDDARK	=	\033[31;1m
REDDARK =       \033[31;1m
RED     =       \033[31;1m
GREEN   =       \033[32;1m
YEL     =       \033[33;1m
BLUE    =       \033[34;1m
PINK    =       \033[35;1m
CYAN    =       \033[36;1m
WHITE   =       \033[0m

## --------------------------------------------------------------- ##
OBJ	=	$(SRC:.cpp=.o)

CFLAGS	+=	-Wall		\
		-Wextra			\
		-Werror


## --------------------------------------------------------------- ##
all:	$(NAME)
	@printf	"$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)$(NAME)$(GREEN)] -> "
	@printf "$(WHITE)Compilation terminée."
	@printf "$ Binaire : $(CYAN) ./%s$(WHITE)\n\n" $(NAME)

$(NAME):	$(OBJ)
	clang++ -o $(NAME) $(OBJ) $(IFLAGS) $(WFLAGS) $(CFLAGS)

## --------------------------------------------------------------- ##
clean:
	rm -f $(OBJ)
	@printf "$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)$(NAME)$(GREEN)] -> "
	@printf "$(WHITE)Suppression terminée.\n\n"


fclean: clean
	rm -f $(NAME)
	rm -f *~
	rm -f vgcore.*

re:	fclean all

.PHONY: re clean fclean all pizza

## ========================================================================= ##
%.o:    %.c
	@printf "$(GREEN)[$(WHITE)$(NAME)$(GREEN)] — $(WHITE)%-45s\n" $<
	@printf "$(GREEN) → $(RES) %-50s" $@
	@printf "$(GREEN)[$(WHITE)√$(GREEN)]\n\n"
	@gcc $(CFLAGS) -o $@ -c $<
