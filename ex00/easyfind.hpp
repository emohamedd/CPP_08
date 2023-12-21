/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:30:25 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/21 14:20:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

template <typename T>
int easyfind(T container, int i)
{
    for(typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if(*it == i)
            return *it;
    }
        throw std::invalid_argument("Not found");
    return 0;
}
