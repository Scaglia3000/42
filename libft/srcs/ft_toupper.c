/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:04:21 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/06 15:27:40 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
	return (0);
}
