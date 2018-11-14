/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:23:37 by mascagli          #+#    #+#             */
/*   Updated: 2018/09/05 20:37:45 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int x;

	x = 2;
	while (nb % x != 0 && x <= 46340)
		x++;
	return (nb > 0 && nb != 1 && (nb == 2 || nb % 2 != 0) &&
			(nb % x != 0 || nb == x) ? 1 : 0);
}