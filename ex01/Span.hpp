/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:33:12 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/21 18:07:35 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

class Span{
    private:
        int N;
        std::vector<int> vec;
    public:
        Span(int N);
        void addNumber(int n);
        void add(int begin, int end);
        void print_vec();
        int shortestSpan();
        int longestSpan();
};
