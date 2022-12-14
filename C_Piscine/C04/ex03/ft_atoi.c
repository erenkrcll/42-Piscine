/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaracil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:46:58 by ekaracil          #+#    #+#             */
/*   Updated: 2022/09/14 11:52:09 by ekaracil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	n;

	i = 0;
	res = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			res *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		n = str[i] - 48 + (n * 10);
		i++;
	}
	return (n * res);
}
