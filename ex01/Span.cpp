/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:51:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/06 22:29:02 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <stdexcept>
#include "Span.hpp"

Span::Span(unsigned int size) : size_(size) {
    numbers_.reserve(size);
}

Span::Span(const Span& src) : numbers_(src.numbers_), size_(src.size_) {
}

Span& Span::operator=(const Span& src) {
    if (this != &src) {
        numbers_ = src.numbers_;
        size_ = src.size_;
    }
    return *this;
}

Span::~Span() {
}

void Span::addNumber(int num) {
    if (numbers_.size() >= size_)
        throw std::runtime_error("Span: addNumber: Span is full");
    numbers_.push_back(num);
}

void Span::addNumbers(
    std::vector<int>::iterator first, std::vector<int>::iterator last) {
    size_t count = std::distance(first, last);
    if (numbers_.size() + count > size_)
        throw std::runtime_error(
            "Span: addNumbers: Span does not have enough capacity");
    numbers_.insert(numbers_.end(), first, last);
}

unsigned int Span::shortestSpan() {
    if (numbers_.size() < 2)
        throw std::runtime_error("Span: shortestSpan: Not enough numbers");
    std::vector<int> sorted = numbers_;
    std::sort(sorted.begin(), sorted.end());
    unsigned int minSpan = sorted[1] - sorted[0];
    for (unsigned int i = 1; i + 1 < sorted.size(); ++i) {
        unsigned int span = sorted[i + 1] - sorted[i];
        if (span < minSpan)
            minSpan = span;
        if (minSpan == 0)
            return 0;
    }
    return minSpan;
}

unsigned int Span::longestSpan() {
    if (numbers_.size() < 2)
        throw std::runtime_error("Span: longestSpan: Not enough numbers");
    int max = *std::max_element(numbers_.begin(), numbers_.end());
    int min = *std::min_element(numbers_.begin(), numbers_.end());
    return max - min;
}
