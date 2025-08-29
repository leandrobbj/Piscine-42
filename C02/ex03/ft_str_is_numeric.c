/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:33:30 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 23:08:56 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/* int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_str_is_numeric(av[1]))
			printf("YES");
		else
			printf("NO");
	}
	printf("\n");
	return (0);
} */
