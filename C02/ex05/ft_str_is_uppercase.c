/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:22:53 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 17:44:26 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			return (1);
		else if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("sdfsf"));
	printf("%d\n", ft_str_is_uppercase("SFSFAS"));
	printf("%d\n", ft_str_is_uppercase("548400as"));
	return (0);
}
