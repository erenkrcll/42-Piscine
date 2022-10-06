/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaracil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:29:42 by ekaracil          #+#    #+#             */
/*   Updated: 2022/09/02 13:08:12 by ekaracil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	temp;

	i = 0;
	x = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[x];
		tab[x] = temp;
		i++;
		x--;
	}
}

/*int	main()
{
    int arr[] = {1,2,3,4,5};
    ft_rev_int_tab(arr,5);
    return 0;
}*/
