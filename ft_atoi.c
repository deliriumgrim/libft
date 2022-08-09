/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drumfred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:39:50 by drumfred          #+#    #+#             */
/*   Updated: 2021/10/22 19:40:51 by drumfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *str)
{
	long int	num;
	long int	old;
	int			znak;
	int			c;

	znak = 1;
	num = 0;
	c = 0;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '-')
		znak = -1;
	if (str[c] == '+' || str[c] == '-')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		old = num;
		num = num * 10 + (str[c++] - 48);
		if ((old < 0 && num > 0) || (old > 0 && num < 0))
			return ((znak == 1) * -1);
	}
	return (num * znak);
}
