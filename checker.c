#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	make_all_actions(t_stack *a, t_stack *b, char *s)
{
	if (ft_strncmp("sa\n", s, 3) == 0)
		sa_without(&a);
	if (ft_strncmp("sb\n", s, 3) == 0)
		sb_without(&b);
	if (ft_strncmp("pa\n", s, 3) == 0)
		pa_without(&a, &b);
	if (ft_strncmp("pb\n", s, 3) == 0)
		pb_without(&a, &b);
	if (ft_strncmp("ra\n", s, 3) == 0)
		ra_without(&a);
	if (ft_strncmp("rb\n", s, 3) == 0)
		rb_without(&b);
	if (ft_strncmp("rra\n", s, 4) == 0)
		rra_without(&a);
	if (ft_strncmp("rrb\n", s, 4) == 0)
		rrb_without(&b);
	if (ft_strncmp("ss\n", s, 3) == 0)
		ss_without(&a, &b);
	if (ft_strncmp("rrr\n", s, 4) == 0)
		rrr_without(&a, &b);
	else
		return (write(2, "Error\n", 6));
	return (0);
}

int	sort_check(int argc, char **argv)
{
	if (check_arguments(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int sort_for_check(t_stack *a, t_stack *b)
{
	char	*s;
	int		i;

	i = 0;
	while (1)
	{
		s = get_next_line(0);
		if (s == NULL)
			break ;
		i++;
		if (make_all_actions(a, b, s))
		{
			free (s);
			return (-1);
		}
	}
	return (i);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		check;

	if(argc ==1 || sort_check(argc, argv))
		return (0);
	a = input_memory();
	b = input_memory();
	argc--;
	while (argc > 0)
	{
		push(&a, ft_atoi(argv[argc]));
		argc--;
	}
	if (sort_check >= 0 && sort(&a) && counter(&b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 4);
	free_memory(&a);
	free_memory(&b);
}
