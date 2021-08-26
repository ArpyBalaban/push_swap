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
#endif
