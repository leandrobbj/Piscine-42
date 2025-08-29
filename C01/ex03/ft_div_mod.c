/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:19:29 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 09:22:19 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* int	main(int ac, char **av)
{
	int	div;
	int	mod;

	if (ac == 3)
	{
		ft_div_mod(atoi(av[1]), atoi(av[2]), &div, &mod);
		printf("div = %d\nmod = %d", div, mod);
	}
	printf("\n");
	return (0);
} */
