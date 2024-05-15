/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:34:00 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/13 18:39:15 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[4] = "ABJ";
	char s2[4] = "ABC";

	int res1 = ft_strcmp(s1, s2);
	int res2 = strcmp(s1, s2);
	printf("res1 = %d, res2 %d", res1, res2);
}
*/
