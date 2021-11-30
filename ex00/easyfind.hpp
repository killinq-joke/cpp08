/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:19:29 by mout              #+#    #+#             */
/*   Updated: 2021/11/30 18:14:31 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <list>
# include <deque>

template <typename T>
int easyfind(T & arr, int occ)
{
	int	ret = 0;

	for (typename T::iterator i = arr.begin(); i != arr.end(); i++)
	{
		if (*i == occ)
			return (ret);
		ret++;
	}
    return (-1);
}

#endif