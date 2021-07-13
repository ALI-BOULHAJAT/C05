/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:15:23 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/12 19:43:52 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 2;
	if (power < 0)
		return (0);
	else if (power == 0 || (nb == 0 && power == 0))
		return (1);
	else
	{
		res = nb;
		while (i <= power)
		{
			res = res * nb;
			i++;
		}
		return (res);
	}
}
