/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <ldei-sva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:03:38 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/05/27 23:03:41 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		void add(void);
		void search(void);
		void ft_exit(void);
	private:
		int	id = 0;
		Contact list[8];
		void get_id(void);
};

#endif
