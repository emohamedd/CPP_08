/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:57:43 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/21 16:23:52 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(10);
        sp.addNumber(10);
        sp.add(1, 9);
        sp.print_vec();
        
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}