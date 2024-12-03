/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:36:41 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 17:43:27 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 33 && *str <= 126)
			return (1);
		else if (!(*str >= 33 && *str <= 126))
			return (0);
		str++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("!"));
	printf("%d\n", ft_str_is_printable("@"));
	printf("%d\n", ft_str_is_printable("%"));
	return (0);
}
