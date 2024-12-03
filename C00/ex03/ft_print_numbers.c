/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:18:19 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 11:19:04 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = 0;
	while (n < 10)
	{
		ft_putchar(n + '0');
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
