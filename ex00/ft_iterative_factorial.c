/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:36:42 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/12 19:46:16 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 1)
	{
		a = a * nb - 1;
		nb--;
	}
	return (a);
}
