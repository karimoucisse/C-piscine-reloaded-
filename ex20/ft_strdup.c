/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:02:35 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/14 12:41:06 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
	char str[6] = "qwerty";
	char *dup = ft_strdup(str);
	printf("%s", dup);
}
*/
