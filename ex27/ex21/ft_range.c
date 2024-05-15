/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:38:01 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/14 12:38:40 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	count_range(int min, int max)
{
	int	len;

	len = 0;
	while (min++ <= max)
		len++;
	return (len);
}

int	*ft_range(int min, int max)
{
	int	len;
	int	*range;

	len = count_range(min, max);
	range = malloc(sizeof(int) * len);
	if (range == NULL)
		return (0);
	while (len > 0)
	{
		range[len - 1] = max;
		max--;
		len--;
	}
	return (range);
}
/*
int main()
{
	int min = -10;
	int max = 10;
	int i = 0;
	int *range = ft_range(min, max);
	while (i <= 20)
	{
		printf("%d\n", range[i]);
		i++;
	}
}
*/
