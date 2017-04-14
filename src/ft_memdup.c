/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eterman <terman.emil@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:26:06 by eterman           #+#    #+#             */
/*   Updated: 2017/04/14 16:26:22 by eterman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memdup(void const *ptr, size_t size)
{
	void			*result;

	result = (void*)malloc(size);
	if (result == NULL)
		return (NULL);
	memcpy(result, ptr, size);
	return (result);
}
