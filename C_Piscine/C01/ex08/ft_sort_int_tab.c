/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaracil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:17:42 by ekaracil          #+#    #+#             */
/*   Updated: 2022/09/02 13:07:40 by ekaracil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	temp;

	a = 0;
	i = 0;
	while (a < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		a++;
		i = 0;
	}
}

/*int main()
{
    int arr[] = {9,3,1,6,8,3,4};
    ft_sort_int_tab(arr, 7);
    return 0;
}*/
