/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:49:25 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/29 15:55:12 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span(unsigned int n) : maxnum(n), count(0)
{
	this->arr = new int[n];
	std::cout << "Span constructor" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor" << std::endl;
}

void	Span::addNumber(int num)
{
	if (this->count == this->maxnum)
		throw Span::MaxSpaceReached();
	this->arr[this->count] = num;
	this->count++;
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	ret = UINT_MAX;
	unsigned int	diff;

	if (this->count <= 1)
		throw Span::NoPossibleSpan();
	for (int i = 0; i < this->maxnum - 1; i++)
	{
		diff = abs(this->arr[i] - this->arr[i + 1]);
		if (diff < ret)
			ret = diff;
	}
	return (ret);
}

unsigned int	Span::longestSpan(void)
{
	unsigned int	ret = 0;
	unsigned int	diff;

	if (this->count <= 1)
		throw Span::NoPossibleSpan();
	for (unsigned int i = 0; i < this->maxnum - 1; i++)
	{
		diff = abs(this->arr[i] - this->arr[i + 1]);
		if (diff > ret)
			ret = diff;
	}
	return (ret);
}