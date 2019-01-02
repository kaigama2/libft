/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:35:50 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/02 10:37:31 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_array_swap(int *array, int i1, int i2)
{
	int		tmp;

	tmp = cache[i1];
	cache[i1] = cache[i2];
	cache[i2] = tmp;
}