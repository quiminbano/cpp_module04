/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:20:24 by corellan          #+#    #+#             */
/*   Updated: 2023/06/09 16:25:10 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(WrongCat const &rhs);
	~WrongCat(void);

	WrongCat	&operator=(WrongCat const &rhs);

	void	makeSound(void) const;
	
};

#endif