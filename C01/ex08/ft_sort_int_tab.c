/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:08:30 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 13:04:31 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		while (j <= size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {67, 54, 64, 34, 56, 45};
	int	size = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d,", tab[i]);
	}
	printf("\n");
	return (0);
}
