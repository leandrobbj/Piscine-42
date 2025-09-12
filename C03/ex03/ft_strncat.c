/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:32:05 by lbraga            #+#    #+#             */
/*   Updated: 2025/09/12 12:45:28 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (dest[l])
		l++;
	while (i < nb && src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}

/* int	main(int ac, char **av)
{
	char	dest[10] = "Hello";
	
	if (ac == 3)
		printf("%s", ft_strncat(dest, av[1], atoi(av[2])));
	printf("\n");	
	return (0);
} */
