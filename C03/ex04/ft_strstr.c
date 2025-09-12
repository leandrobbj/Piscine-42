/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:43:48 by lbraga            #+#    #+#             */
/*   Updated: 2025/09/12 15:08:51 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] && to_find[j] == str[i + j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (NULL);
}

/* int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_strstr(av[1], av[2]));
	printf("\n");
	return (0);
}
 */