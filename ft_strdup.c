/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:39:41 by ikovalen          #+#    #+#             */
/*   Updated: 2018/10/30 09:41:23 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dupe;

	len = ft_strlen(src);
	dupe = malloc(len + 1);
	if (dupe == NULL)
		return (NULL);
	return (ft_strcpy(dupe, src));
}
