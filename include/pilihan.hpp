#ifndef __PILIHAN_HPP__
#define __PILIHAN_HPP__

#include <iostream>

class pilihan {
private:
	std::string pilih;

public:
	pilihan(std::string pilih);

	void setPilih(std::string pilih);
	std::string getPilih();

};


#endif
