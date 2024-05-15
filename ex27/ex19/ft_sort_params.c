/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:53:27 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/15 13:23:08 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}
*/
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

void	ft_sort_params(char **str)
{
	int		i;
	char	*res;

	i = 1;
	while (str[i + 1])
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			res = str[i];
			str[i] = str[i + 1];
			str[i + 1] = res;
			i = 0;
		}
		i++;
	}
}

void	ft_print_params(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	(void)ac;
	if (ac > 1)
		ft_sort_params(av);
	ft_print_params(av);
}
