/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:02:55 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/21 14:27:32 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try{   
        // THIS IS VECTOR
        std::vector<int> vec;
        for (int i = 0; i < 10; i++)
        {
            vec.push_back(i);
        }
        std::cout << easyfind(vec, 2) << std::endl;


        //THIS IS LIST
        std::list<int> list;
        for (int i = 0; i < 10; i++)
        {
            list.push_back(i);
        }
        std::cout << easyfind(list, 3) << std::endl;


        //THIS IS DEQUE
        std::deque<int> dq;
        for (int i = 0; i < 10; i++)
        {
            dq.push_back(i);
        }
        std::cout << easyfind(dq, 10) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}