/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:10:48 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/22 18:26:10 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <algorithm>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>()
	{
	};
	virtual ~MutantStack(void)
	{
	};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); };
	iterator end() { return this->c.end(); };
};

#endif