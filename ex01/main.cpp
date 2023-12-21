/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:57:43 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/21 17:04:27 by emohamed         ###   ########.fr       */
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
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}