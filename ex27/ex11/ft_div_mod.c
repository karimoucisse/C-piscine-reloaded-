/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:31:48 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/13 16:33:55 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
	int a = 8;
	int b = 3;
	int div = 0;
	int mod = 0;

	ft_div_mod( a, b, &div, &mod);
	printf("mod = %d, div = %d", mod, div);
}
*/
