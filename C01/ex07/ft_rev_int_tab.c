/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:55:15 by lbraga            #+#    #+#             */
/*   Updated: 2025/08/29 10:21:32 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		t = tab[i];
		tab[i] = tab[j];
		tab[j] = t;
		i++;
		j--;
	}
}

/* int main(void)
{	
	int	i = 0;
    int tab[] = {1, 2, 3, 4, 5};

    ft_rev_int_tab(tab, 5);
	while(tab[i] && 5 > i)
        printf("%d ", tab[i++]);
    printf("\n");
    return (0);
} */
