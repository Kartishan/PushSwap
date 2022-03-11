NAME =  push_swap
NAME_B = checker

SRCS =	function1.c function2.c function3.c push_swap.c \
		find.c index.c free.c utilis_without3.c sortfor5elem.c\
		sortfor3elem.c utilis_return.c\
		sortfor4elem.c utilis_without.c utilis_without2.c quicksort.c myquick.c bubblesort.c

SRCS_B = checker.c checfunction.c utilis_without.c utilis_without2.c utilis_without3.c  utilis_without4.c free.c\
			function1.c function2.c function3.c utilis_return.c

HEADER = struct.h
OBJ =   $(SRCS:%.c=%.o)
OBJ_B =   $(SRCS_B:%.c=%.o)

CFLAGS = -Wall -Wexra -Werror -I$(HEADER)
.PHONY : all clean fclean re bonus gnl

all : $(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	gcc $(CFLAGS) $(OBJ) -o $@
%.o		:	%.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@
get :
	gcc $(FLAGS) -c ./gnl/*_bonus.c
bonus	: get $(OBJ_B) ${HEADER} 
	cd libft && make -f MakefileLibft
	gcc $(CFLAGS) $(OBJ_B) get_next_line*.o -o checker -L ./libft -lft
clean :
	rm -f $(OBJ) $(OBJ_B) *bonus.o && cd libft && make -f MakefileLibft clean
fclean : clean
	@$(RM) $(NAME) $(NAME_B) && cd libft && make -f MakefileLibft fclean
re : fclean all