/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:07:04 by mait-si-          #+#    #+#             */
/*   Updated: 2019/10/18 17:44:32 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables(char **tab)
{
	while (*tab != '\0')
	{
		ft_putstr(*tab++);
		ft_putstr("\n");
	}
}