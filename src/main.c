#include "../includes/push_swap.h"

static void ft_initstack(t_list** stack, int argc, char** argv)
{

	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

int main(int argc, char** argv)
{
	t_list** stack_a;
	t_list** stack_b;

	ft_check(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_initstack(stack_a, argc, argv);
	if(is_sorted(stack_a))
	{
		free(stack_a);
		free(stack_b);
		return (-1);
	}

	ft_lstprint(stack_a);

	return (0);
}




