/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:41:15 by lbraga            #+#    #+#             */
/*   Updated: 2025/09/12 16:21:21 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (--power)
		r = r * nb;
	return (r);
}

/* int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
} */
