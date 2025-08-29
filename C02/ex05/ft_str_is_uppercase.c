/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:04:06 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 23:13:19 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/* int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_str_is_uppercase(av[1]))
			printf("YES");
		else
			printf("NO");
	}
	printf("\n");
	return (0);
} */
