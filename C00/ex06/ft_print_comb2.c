/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:22:41 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 11:23:07 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	numbers[100];

	i = 0;
	while (i < 100)
	{
		numbers[i] = i;
		i++;
	}
	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print_digits(numbers[i]);
			ft_putchar(' ');
			ft_print_digits(numbers[j]);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
