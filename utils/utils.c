#include "../includes/push_swap.h"

void ft_error(char* message)
{
	ft_putendl_fd(message,1);
	exit(0);
}

void ft_free(char** array)
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int is_sorted(t_list** stack)
{
	t_list* head;

	head = *stack;
	while (head)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}
