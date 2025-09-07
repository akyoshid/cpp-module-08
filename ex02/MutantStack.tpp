/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:31:48 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/07 15:39:41 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : Base() {
}

template <typename T>
MutantStack<T>::MutantStack(const std::stack<T>& stack) : Base(stack) {
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : Base(src) {
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& src) {
    if (this != &src)
        Base::operator=(src);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
    return this->c.rend();
}
