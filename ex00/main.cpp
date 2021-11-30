/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:16:41 by ztouzri           #+#    #+#             */
/*   Updated: 2021/11/30 18:39:24 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int	arrsize = 10;
	int a[] = { 1, 5, 2, 6, 77, 4, 3, 1 , 9, 11};
	std::list<int> arr1;
	std::vector<int> arr2;
	std::deque<int> arr3;
	int	occ = 0;
	int	occ1 = 2;
	int	occ2 = 1;

	for (int i = 0; i < arrsize; i++)
	{
		arr1.push_back(a[i]);
		arr2.push_back(a[i]);
		arr3.push_back(a[i]);
	}
	std::cout << "first occurence of: " << occ << " is index: " << easyfind(arr1, occ) << std::endl;
	std::cout << "first occurence of: " << occ1 << " is index: " << easyfind(arr2, occ1) << std::endl;
	std::cout << "first occurence of: " << occ2 << " is index: " << easyfind(arr3, occ2) << std::endl;
    return (0);
}