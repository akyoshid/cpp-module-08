/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:51:13 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/06 22:14:28 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <iostream>
#include "Span.hpp"

int main()
{
    try {
        std::cout << "=== Test given by subject ===" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    try {
        std::cout << "=== Test of INT_MAX & INT_MIN ===" << std::endl;
        Span sp(2);
        sp.addNumber(std::numeric_limits<int>::max());
        sp.addNumber(std::numeric_limits<int>::min());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    try {
        std::cout << "=== Test of 10,000 numbers ===" << std::endl;
        std::vector<int> numbers;
        numbers.reserve(10000);
        srand(static_cast<unsigned int>(time(NULL)));
        for (int i = 0; i < 10000; ++i)
            numbers.push_back(rand());
        Span sp(10000);
        sp.addNumbers(numbers.begin(), numbers.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    try {
        std::cout << "=== Test of 1,000,000 numbers ===" << std::endl;
        std::vector<int> numbers;
        numbers.reserve(1000000);
        for (int i = 0; i < 1000000; ++i)
            numbers.push_back(rand());
        Span sp(1000000);
        sp.addNumbers(numbers.begin(), numbers.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
