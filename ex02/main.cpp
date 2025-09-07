/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:31:31 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/07 16:10:25 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main()
{
    std::cout << "=== Test given by subject ===" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "=== Test replaced with std::list ===" << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    //[...]
    list.push_back(0);
    std::list<int>::iterator list_it = list.begin();
    std::list<int>::iterator list_ite = list.end();
    ++list_it;
    --list_it;
    while (list_it != list_ite) {
        std::cout << *list_it << std::endl;
        ++list_it;
    }

    std::cout << "=== Original test ===" << std::endl;
    it = mstack.begin();
    int i = 0;
    while (it != ite) {
        *it = i;
        ++it;
        ++i;
    }
    MutantStack<int> cp1(mstack);
    MutantStack<int> cp2(s);
    const MutantStack<int> constMstack(mstack);
    MutantStack<int>::const_iterator cit = mstack.begin();
    MutantStack<int>::const_iterator cite = mstack.end();
    ++cit;
    --cit;
    while (cit != cite) {
        std::cout << *cit << std::endl;
        ++cit;
    }
    MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.rend();
    while (crit != crite) {
        std::cout << *crit << std::endl;
        ++crit;
    }
    return 0;
}
