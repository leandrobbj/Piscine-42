/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:33:02 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 09:47:34 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = (*a / *b);
	*b = (*a % *b);
	*a = tmp;
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
		ft_ultimate_div_mod(&a, &b);
		printf("%d %d", a, b);
	}
	printf("\n");
	return (0);
} */
