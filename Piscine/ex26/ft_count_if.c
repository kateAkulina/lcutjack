/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:35:43 by lcutjack          #+#    #+#             */
/*   Updated: 2018/11/20 19:28:06 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int k;
	int c;

	k = 0;
	c = 0;
	while (tab[k] != 0)
	{
		if (f(tab[k++]) == 1)
			c++;
	}
	return (c);
}
