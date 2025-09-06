/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:11:08 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/06 15:16:07 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <exception>
#include "easyfind.hpp"

int main() {
    // int
    std::vector<int> iv;
    iv.push_back(0);
    iv.push_back(1);
    iv.push_back(2);
    iv.push_back(3);
    iv.push_back(4);
    iv.push_back(5);
    iv.push_back(6);
    iv.push_back(7);
    std::cout << "iv              : ";
    for (std::vector<int>::iterator it = iv.begin(); it != iv.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    try {
        std::cout << "easyfind(iv, 4) : ";
        std::vector<int>::iterator it = easyfind(iv, 4);
        std::cout << "SUCCESS: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cerr << "FAILURE: " << e.what() << std::endl;
        return 1;
    } try {
        std::cout << "easyfind(iv, -1): ";
        std::vector<int>::iterator it = easyfind(iv, -1);
        std::cerr << "FAILURE: " << *it << std::endl;
        return 1;
    } catch (std::exception& e) {
        std::cout << "SUCCESS: " << e.what() << std::endl;
    }
    // long
    std::vector<long> lv;
    lv.push_back(0);
    lv.push_back(1);
    lv.push_back(2);
    lv.push_back(3);
    lv.push_back(4);
    lv.push_back(5);
    lv.push_back(6);
    lv.push_back(7);
    std::cout << "lv              : ";
    for (std::vector<long>::iterator it = lv.begin(); it != lv.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    try {
        std::cout << "easyfind(lv, 4) : ";
        std::vector<long>::iterator it = easyfind(lv, 4);
        std::cout << "SUCCESS: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cerr << "FAILURE: " << e.what() << std::endl;
        return 1;
    } try {
        std::cout << "easyfind(lv, -1): ";
        std::vector<long>::iterator it = easyfind(lv, -1);
        std::cerr << "FAILURE: " << *it << std::endl;
        return 1;
    } catch (std::exception& e) {
        std::cout << "SUCCESS: " << e.what() << std::endl;
        return 0;
    }
}
