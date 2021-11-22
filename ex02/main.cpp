/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:09:13 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/22 18:35:13 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(4);
	mstack.push(283);
	mstack.push(7);
	mstack.push(434);
	mstack.push(99);
	mstack.push(22222);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	std::cout << *it << std::endl;
	--it;
	std::cout << "-----------BEGIN------------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "------------END-------------" << std::endl;
	std::stack<int> s(mstack);
	// std::stack<int>::iterator it1 = s.begin();
	// std::stack<int>::iterator ite1 = s.end();
	return 0;
}