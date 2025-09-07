/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:31:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/07 15:39:36 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_MUTANTSTACK_HPP_
# define EX02_MUTANTSTACK_HPP_

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
    typedef std::stack<T>                                    Base;
    typedef typename Base::container_type                    container_type;
    typedef typename container_type::iterator                iterator;
    typedef typename container_type::const_iterator          const_iterator;
    typedef typename container_type::reverse_iterator        reverse_iterator;
    typedef typename container_type::const_reverse_iterator  const_reverse_iterator;
    MutantStack();
    explicit MutantStack(const std::stack<T>& stack);
    MutantStack(const MutantStack& src);
    MutantStack& operator=(const MutantStack& src);
    ~MutantStack();
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
};

# include "MutantStack.tpp"

#endif
