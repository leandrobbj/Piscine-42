/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:59:28 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 09:41:08 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

/* int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("%d %d\n", a, b);
		ft_swap(&a, &b);
		printf("%d %d", a, b);
	}
	printf("\n");
	return (0);
} */
