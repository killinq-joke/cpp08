/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:49:09 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/22 18:37:28 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "-------------------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "-------------------------" << std::endl;
	try
	{
		Span sp = Span(5);
		std::cout << "coucou1" << std::endl;
		sp.addNumber(5);
		std::cout << "coucou2" << std::endl;
		sp.addNumber(3);
		std::cout << "coucou3" << std::endl;
		sp.addNumber(17);
		std::cout << "coucou4" << std::endl;
		sp.addNumber(9);
		std::cout << "coucou5" << std::endl;
		sp.addNumber(11);
		std::cout << "coucou6" << std::endl;
		sp.addNumber(11);
		std::cout << "coucou7" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		Span sp = Span(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------" << std::endl;
	return 0;
}