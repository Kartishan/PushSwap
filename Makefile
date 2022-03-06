NAME =  push_swap

SRCS =	function1.c function2.c function3.c push_swap.c \
		find.c index.c free.c utilis_without3.c sortfor5elem.c\
		sortfor3elem.c\
		sortfor4elem.c utilis_without.c utilis_without2.c quicksort.c myquick.c bubblesort.c

HEADER = struct.h
OBJ =   $(SRCS:%.c=%.o)

CFLAGS = -I$(HEADER)
.PHONY : all clean fclean re

all : $(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	gcc $(CFLAGS) $(OBJ) -o $@
%.o		:	%.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	@$(RM) $(NAME)
re : fclean all