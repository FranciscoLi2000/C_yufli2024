/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:00:36 by yufli             #+#    #+#             */
/*   Updated: 2024/12/02 23:21:29 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	create_array(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] +'0');
		i++;
	}
	if (arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}

void	valid_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (arr[i] >= arr[i+1])
			return (0);
		i++;
	}
	return (1);
}

void	increment_array(int *arr, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		arr[i]++;
		if (arr[i] <= 9)
			break;
		i--;
	}
	i++;
	while (i < n)
	{
		arr[i] = arr[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	create_array(arr, n);
	while (arr[0] != 10 - n)
	{
		increment_array(arr, n);
		if (valid_comb(arr, n))
			create_array(arr, n);
	}
}

int	main(void)
{
	int	n;

	n = 2;
	ft_print_combn(n);
	return (0);
}
