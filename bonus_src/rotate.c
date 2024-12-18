/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabadan <drabadan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:47:34 by drabadan          #+#    #+#             */
/*   Updated: 2024/10/16 11:25:34 by drabadan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_header.h"

void	rotate_a(t_Stack *a)
{
	if (a -> top == NULL || a -> top -> next == NULL)
		return ;
	a -> top -> prev = a -> end;
	a -> end -> next = a -> top;
	a -> top -> next -> prev = NULL;
	a -> top = a -> top -> next;
	a -> end = a -> end -> next;
	a -> end -> next = NULL;
}

void	rotate_b(t_Stack *b)
{
	if (b -> top == NULL || b -> top -> next == NULL)
		return ;
	if (b -> top -> next == b -> end)
	{
		b -> top = b -> end;
		b -> end = b -> top -> prev;
		b -> top -> next = b -> end;
		b -> end -> prev = b -> top;
		b -> top -> prev = NULL;
		b -> end -> next = NULL;
	}
	else
	{
		b -> top -> prev = b -> end;
		b -> end -> next = b -> top;
		b -> top -> next -> prev = NULL;
		b -> top = b -> top -> next;
		b -> end = b -> end -> next;
		b -> end -> next = NULL;
	}
}

void	rotate_r(t_Stack *a, t_Stack *b)
{
	if (a -> top == NULL || a -> top -> next == NULL)
		return ;
	if (b -> top == NULL || b -> top -> next == NULL)
		return ;
	a -> top -> prev = a -> end;
	a -> end -> next = a -> top;
	a -> top -> next -> prev = NULL;
	a -> top = a -> top -> next;
	a -> end = a -> end -> next;
	a -> end -> next = NULL;
	b -> top -> prev = b -> end;
	b -> end -> next = b -> top;
	b -> top -> next -> prev = NULL;
	b -> top = b -> top -> next;
	b -> end = b -> end -> next;
	b -> end -> next = NULL;
}

void	rev_ra(t_Stack *a)
{
	if (a -> top == NULL || a -> top -> next == NULL)
		return ;
	a -> end -> next = a -> top;
	a -> top -> prev = a -> end;
	a -> end = a -> end -> prev;
	a -> end -> next = NULL;
	a -> top = a -> top -> prev;
	a -> top -> prev = NULL;
}

void	rev_rb(t_Stack *b)
{
	if (b -> top == NULL || b -> top -> next == NULL)
		return ;
	b -> end -> next = b -> top;
	b -> top -> prev = b -> end;
	b -> end = b -> end -> prev;
	b -> end -> next = NULL;
	b -> top = b -> top -> prev;
	b -> top -> prev = NULL;
}
