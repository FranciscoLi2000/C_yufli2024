/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:24:56 by yufli             #+#    #+#             */
/*   Updated: 2024/12/03 23:17:24 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	main(void)
{
	char	dest[0];
	char *src = "My name is Yufeng Li";
	unsigned int len = ft_strlcpy(dest, src, 0);
	printf("%s\n", dest);
	printf("%i\n", len);
	return (0);
}
