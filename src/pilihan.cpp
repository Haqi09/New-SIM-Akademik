#include <iostream>
#include "include/pilihan.hpp"


pilihan::pilihan(std::string pilih)
		: pilih(pilih)
{
	
}

void pilihan::setPilih(std::string pilih)
{
	this->pilih = pilih;
}

std::string pilihan::getPilih() 
{
	return this->pilih;
}




