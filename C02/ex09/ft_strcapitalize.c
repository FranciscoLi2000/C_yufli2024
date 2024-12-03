/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:36:44 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 22:23:06 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;
	char	*start;

	start = str;
	word = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (word && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - 32;
			word = 0;
		}
		else if ((*str >= '0' && *str <= '9') || (!(*str == 32)))
			word = 0;
		else if ((*str >= 33 && *str <= 47) || (*str >= 58 && *str <= 64))
			word = 1;
		else if ((*str >= 91 && *str <= 96) || (*str >= 123 && *str <= 126))
			word = 1;
		else if (*str == 32)
			word = 1;
		str++;
        }
	return (start);
}

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
