/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcisse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:50:44 by kcisse            #+#    #+#             */
/*   Updated: 2024/05/13 14:50:47 by kcisse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}
*/
void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + '0');
		i++;
	}
}
/*
int main()
{
	 ft_print_numbers();
}
*/
