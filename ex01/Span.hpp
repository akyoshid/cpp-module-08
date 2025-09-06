/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:51:25 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/06 21:42:23 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SPAN_HPP_
# define EX01_SPAN_HPP_

# include <vector>

class Span {
 public:
    Span(unsigned int size);
    Span(const Span& src);
    Span& operator=(const Span& src);
    ~Span();
    void addNumber(int num);
    void addNumbers(
        std::vector<int>::iterator first, std::vector<int>::iterator last);
    unsigned int shortestSpan();
    unsigned int longestSpan();
 private:
    std::vector<int> numbers_;
    unsigned int size_;
    Span(); // = delete
};

#endif
