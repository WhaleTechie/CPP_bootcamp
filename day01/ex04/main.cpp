/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:48:16 by lkrinova          #+#    #+#             */
/*   Updated: 2021/10/18 20:48:18 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// program takes 
// a filename 
// two strings, s1 and s2, NOT empty.
// It will open the file, and write its contents to FILENAME.replace, after replacing
// every occurrence of s1 with s2.
// All the member functions of the class std::string are allowed, except replace. 
#include <string>
#include <fstream>
#include <iostream>

void ft_replace(std::string *original, std::string s1, std::string s2)
{
    size_t pos = 0;

    while ((pos = original->find(s1, pos)) != std::string::npos) {
        original->erase(pos,s1.length());
        original->insert(pos, s2);
        pos +=s2.length();
    }
}

int main (int argc, char**argv) {
  
	std::ifstream original_strm;
	std::ofstream replaced_strm;
	std::string str, filename, str_tfnd, str_trplc;
  

  if (argc != 4) {
    std::cout << "Wrong num,ber of parameters!" << std::endl;
    return 0;
  }
 
  if (!*argv[2] || !*argv[3]) {
		std::cout << "bad arguments: srtrings can't be empty (read subject)" << std::endl;
    return (-1);
    }

  filename = argv[1];
  str_tfnd = argv[2];
  str_trplc = argv[3];

  original_strm.open(argv[1]);
  if (!original_strm) {
		  std::cout << "Error in Opening Source File...!!! " << std::endl;
      return (-1) ;
  }

  if (original_strm.is_open())
    replaced_strm.open(filename+".replace");
  if (!replaced_strm) {
		std::cout << "Error in Opening Destination File!!!" << std::endl;
		original_strm.close();
		return (-1);
	}

  if (original_strm.is_open() && replaced_strm.is_open()) {
    while (getline(original_strm, str))
		{
      ft_replace(&str, str_tfnd, str_trplc);
      replaced_strm << str << std::endl;
		}
  }
  original_strm.close();
  replaced_strm.close();
  return 0;
}