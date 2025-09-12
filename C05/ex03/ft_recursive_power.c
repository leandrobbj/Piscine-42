/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:42:12 by lbraga            #+#    #+#             */
/*   Updated: 2025/09/12 16:22:09 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power -1));
}

/* int main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
} */
