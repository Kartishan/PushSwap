NAME =  push_swap

SRCS =	function1.c function2.c function3.c push_swap.c \
		find.c insertion_sort.c insertion_sort_without.c insertion_sort.c\
		insertion_sort_without.c modified_isertion_sort.c newsort.c\
		sort3withparam.c sort4withparam.c sortfor2elem.c sortfor3elem.c\
		sortfor4elem.c utilis_without.c utilis_without2.c modified_isertion_sort.c\
		struct.h
HEADER = struct.h

OBJ	=	$(SRCS:%.c=%.o)
CFLAGS	=	-Wall -Wextra -Werror $(HEADER)

.PHONY	:	all clean fclean re


all	:   $(NAME)
$(NAME) : $(OBJ) ${HEADER}
	gcc $(CFLAGS) $(OBJ) -o $@
%.o : %.c ${HEADER}
	gcc $(CFLAGS) -c $< -o $@
clean	:
	rm -rf $(OBJ)
fclean	:	clean
	rm -rf $(NAME)
re		:	fclean all
