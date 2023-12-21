/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:38:37 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/21 17:12:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int n)
{
    this->N = n;
    vec.reserve(N);
}
void Span::addNumber(int n)
{
    if (N > static_cast<int>(vec.size()))
    {
        vec.push_back(n);
    }
    else
        throw std::invalid_argument("OUT OF RANGE");
}

void Span::print_vec(){

    for(int i = 0; i < N; i++)
    {
        std::cout << vec.at(i) << std::endl;
    }
}

void Span::add(int b, int e){
    if (e - b > N)
        throw std::invalid_argument("TOO MANY NUMBERS (OUT OF RANGE)");
    for (int i = b; i <= e; i++)
    {
        addNumber(i);
    }
}

int Span::longestSpan(){
    
    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());

    return (max - min);
}
int Span::shortestSpan(){
    
    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());

    return (max - min);
}
