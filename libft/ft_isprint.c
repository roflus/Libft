/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rharing <rharing@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:00:39 by rharing       #+#    #+#                 */
/*   Updated: 2022/01/19 14:00:42 by rharing       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}