/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rharing <rharing@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:00:24 by rharing       #+#    #+#                 */
/*   Updated: 2022/01/19 14:00:25 by rharing       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
