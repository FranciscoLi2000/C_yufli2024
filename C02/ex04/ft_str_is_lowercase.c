/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:49:31 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 17:44:57 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			return (1);
		else if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("sdfsf"));
	printf("%d\n", ft_str_is_lowercase("SFSFAS"));
	printf("%d\n", ft_str_is_lowercase("548400as"));
	return (0);
}
