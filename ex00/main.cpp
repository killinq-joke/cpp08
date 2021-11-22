/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:16:41 by mout              #+#    #+#             */
/*   Updated: 2021/11/22 15:47:31 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
int easyfind(T arr, int occ)
{
	int	ret = 0;

	for (auto i = arr.begin(); i != arr.end(); i++)
	{
		if (*i == occ)
			return (ret);
		ret++;
	}
    return (-1);
}

int main(void)
{
	int	arrsize = 10;
	int a[] = { 1, 5, 2, 6, 77, 4, 3, 1 , 9, 11};
	std::list<int> arr1;
	std::vector<int> arr2;
	std::deque<int> arr3;
	int	occ = 0;

	for (int i = 0; i < arrsize; i++)
	{
		arr1.push_back(a[i]);
		arr2.push_back(a[i]);
		arr3.push_back(a[i]);
	}
	std::cout << "first occurence of: " << occ << " is index: " << easyfind(arr1, occ) << std::endl;
	std::cout << "first occurence of: " << occ << " is index: " << easyfind(arr2, occ) << std::endl;
	std::cout << "first occurence of: " << occ << " is index: " << easyfind(arr3, occ) << std::endl;
    return (0);
}