/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 08:55:19 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/28 16:48:38 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <fstream>

class File
{
	private:
		std::string		_fileName;
		std::string		_fileContent;
		std::string		_newFileContent;
	public:
		File();
		~File();
		void			replace_s1_with_s2_in_file( std::string s1, std::string s2 );
		bool			isOpen( std::string filename );
		bool			createNewFile( void );
};

#endif