#include "../includes/push_swap.h"

int swap(t_list** stack)
{
	t_list	*head;
	t_list	*second;

	head = *stack;
	second = head->next;

	if (ft_lstsize(stack) < 2)
		return (-1);

	head->next = second->next;
	second->next = head;
	*stack = second;
	return (0);
}

int	push(t_list **stack_to, t_list** stack_from)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_lstsize(stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	*stack_from = head_from->next;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int rotate(t_list** stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(stack);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int re_rotate(t_list** stack)
{
	t_list *head;
	t_list *tail;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}


int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(stack_a) < 2) || (ft_lstsize(stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(stack_a) < 2) || (ft_lstsize(stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

int	rra(t_list **stack_a)
{
	if (re_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (re_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(stack_a) < 2) || (ft_lstsize(stack_b) < 2))
		return (-1);
	re_rotate(stack_a);
	re_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
