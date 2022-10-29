/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emyilmaz <emyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:13:34 by emyilmaz          #+#    #+#             */
/*   Updated: 2022/09/30 23:24:49 by emyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_list **stackA, t_list **stackB)
{
	(void)stackB;
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			sa(stackA);
	}
	else if (ft_lstsize(*stackA) == 3)
		ft_sort_three(stackA);
	else if (ft_lstsize(*stackA) == 4)
		ft_sourt_four(stackA, stackB);
	else if (ft_lstsize(*stackA) == 5)
		ft_sort_five(stackA, stackB);
}
