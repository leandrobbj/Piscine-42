/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:00:51 by lbraga            #+#    #+#             */
/*   Updated: 2025/09/12 16:21:08 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nb--;
		r = r * nb;
	}
	return (r);
}

/* int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_iterative_factorial(atoi(av[1])));
	printf("\n");
	return (0);
} */
