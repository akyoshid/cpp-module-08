/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:11:25 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/06 14:32:13 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_EASYFIND_HPP_
# define EX00_EASYFIND_HPP_

template <typename T>
typename T::iterator easyfind(T& container, int value);

# include "easyfind.tpp"

#endif
