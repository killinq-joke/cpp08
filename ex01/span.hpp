/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:49:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/22 16:18:08 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <cmath>
# include <limits>

class Span
{
	
public:
	Span(unsigned int n);
	~Span(void);

	void	addNumber(int num);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

	class	MaxSpaceReached : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Max space reached");
			}
	};

	class	NoPossibleSpan : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return("No possible span found");
			}
	};

	unsigned int	maxnum;
	unsigned int	count;
	int				*arr;

};

#endif