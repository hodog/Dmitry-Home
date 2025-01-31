/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:28:34 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/30 10:11:47 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    int nb = 1;
    int power = 0;

    printf("%d\n", ft_recursive_power(nb, power));
    return (0);
}
*/