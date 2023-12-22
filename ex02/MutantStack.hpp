/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:45:15 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/22 17:29:43 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
   public:
    class iterator {
    public:
        iterator(typename std::stack<T>::container_type::iterator it) : it(it) {}
        T& operator*(){
            return *it; 
        }
        iterator& operator++(){
            ++it; 
            return *this; 
        }
        iterator& operator--(){
            --it; 
            return *this; 
        }
        bool operator!=(const iterator& other) const{
            if (it != other.it)
                return true;
            return false;
        }

    private:
        typename std::stack<T>::container_type::iterator it;
    };

    iterator begin(){
         return iterator(this->c.begin()); 
    }
    iterator end(){
        return iterator(this->c.end());  
    }
};