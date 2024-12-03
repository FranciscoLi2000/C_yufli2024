/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:40:03 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 17:45:30 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (str == NULL)
		return (0);
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		else if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("sdfsf"));
	printf("%d\n", ft_str_is_numeric("SFSFAS"));
	printf("%d\n", ft_str_is_numeric("548400as"));
	return (0);
}
