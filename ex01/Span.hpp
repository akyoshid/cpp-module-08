/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:51:25 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/06 22:35:32 by akyoshid         ###   ########.fr       */
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
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
 private:
    std::vector<int> numbers_;
    unsigned int size_;
    Span(); // = delete
};

#endif
