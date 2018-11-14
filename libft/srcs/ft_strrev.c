/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:53:41 by mascagli          #+#    #+#             */
/*   Updated: 2018/08/29 18:02:18 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int l;
	int tmp;

	l = 0;
	tmp = 0;
	while (str[l])
		l++;
	i = -1;
	while (i < l)
	{
		tmp = str[l];
		str[l] = str[i];
		str[i] = tmp;
		l--;
		i++;
	}
	return (str);
}