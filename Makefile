NAME =  a123

SRCS =	function1.c\
		function2.c function3.c push_swap.c
HEADER = struct.h

OBJ	=	$(SRCS:%.c=%.o)


CFLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	: $(OBJ) $(HEADER)
		-o $(NAME) $?
%.o : %.c
	gcc $(CFLAGS) -c $< -o $@
clean	:
	rm -f $(OBJ)
fclean	:	clean
	rm -f $(NAME)
re		:	fclean all

.PHONY	:	all clean fclean re 
