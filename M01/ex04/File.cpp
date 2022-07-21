/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:19:38 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/28 17:06:01 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"


File::File()
{
	return ;
}

File::~File()
{
	return ;
}

bool	File::isOpen( std::string filename )
{
	_fileName = filename;

	std::ifstream	ifs( _fileName.c_str() );

	if (!ifs.is_open())
	{
		std::cout << "Error: files can't be open" << std::endl;
		return	false;
	}

	std::stringstream	filename_stream;
	filename_stream << ifs.rdbuf();
	_fileContent = filename_stream.str();

	ifs.close();
	return	true;
}

void	File::replace_s1_with_s2_in_file( std::string s1, std::string s2 )
{
	
	std::string		temp_content = _fileContent;
	std::size_t		pos;

	pos = temp_content.find( s1 );
	while (pos != std::string::npos)
	{
		temp_content.erase( pos, s1.length() );
		temp_content.insert( pos, s2 );
		pos = temp_content.find( s1, pos + s2.length() );
	}
	_newFileContent = temp_content;

	std::cout << _newFileContent << std::endl;

	return;
}


bool	File::createNewFile( void )
{
	std::string		newFile =  _fileName + ".replace";
	std::ofstream	osf( newFile.c_str() );
	
	if (!osf.is_open())
	{
		std::cout << "Error: Failed to create the new file" << std::endl;
		return	false;
	}

	osf << _newFileContent;
	osf.close();
	return	true;
}