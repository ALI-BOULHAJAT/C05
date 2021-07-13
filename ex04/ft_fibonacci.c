/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:45:59 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/13 08:20:50 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if ((index == 0) || (index == 1))
		return (index);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
