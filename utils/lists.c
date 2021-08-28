#include "../includes/push_swap.h"

t_list *ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list*) malloc(sizeof(*new));
	if(!new)
		return(NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return(new);
}

void ft_lstadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

t_list *ft_lstlast(t_list **stack)
{
	t_list *head;

	head = *stack;
	while(head->next)
		head = head->next;
	return(head);
}

void ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list *tail;

	if(*stack)
	{
		tail = ft_lstlast(stack);
		tail->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int ft_lstsize(t_list **stack)
{
	t_list *head;
	int len;

	len = 0; 
	head = *stack;
	while (head)
	{
		head = head->next;
		len++;
	}
	return (len);
}

void ft_lstprint(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
