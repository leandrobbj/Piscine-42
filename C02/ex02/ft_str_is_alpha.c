/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:39:15 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 23:07:07 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/* int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_str_is_alpha(av[1]))
			printf("YES");
		else
			printf("NO");
	}
	printf("\n");
	return (0);
} */
