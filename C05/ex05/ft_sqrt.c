/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:59:46 by lbraga            #+#    #+#             */
/*   Updated: 2025/09/12 16:21:49 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb > (i * i))
		i++;
	if (nb == (i * i))
		return (i);
	return (0);
}

/* int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_sqrt(atoi(av[1])));
	printf("\n");
	return (0);
} */
