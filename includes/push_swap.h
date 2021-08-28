#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct s_list
{
	int 			value;
	int 			index;
	struct s_list	*next;
		
}			t_list;

void	ft_free(char** array);
void	ft_error(char* message);
void	ft_check(int argc, char** argv);
t_list	*ft_lstnew(int value);
void	ft_lstadd_front(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list **stack);
void	ft_lstadd_back(t_list **stack, t_list *new);
int		ft_lstsize(t_list **stack);
void	ft_lstprint(t_list **stack);
void	index_stack(t_list **stack);
int		is_sorted(t_list** stack);
void	free_stack(t_list** stack);
int		get_distance(t_list **stack, int index);
int		simple_sort(t_list** stack_a, t_list** stack_b);

int		swap(t_list** stack);
int		push(t_list** stack_to, t_list** stack_from);
int		rotate(t_list **stack);
int		reverseRotate(t_list **stack);

int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

#endif
