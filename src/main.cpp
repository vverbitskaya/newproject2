#include <iostream>
#include <string>
#include <vector>
#include "book_class.hpp"


int main () {
	std::cout << "Hello World" << std::endl;

	book b;
	b.autor_.firstName = "Misha";
	b.autor_.secondName = "Pedus";
	b.date_.day = 21;
	b.date_.mounth = Mounth::Feb;
	b.date_.year = 2020;

	Page p1;
	p1.content = "long long time ago...";

	b.addPage(p1);
	std::cout << b.pageCount_ << std::endl;

	Page p2;
	p2.content = "other content";

	b.addPage(p2);
	std::cout << b.pageCount_ << std::endl;

	std::cout << b.getPage(0).content << ' ' << b.getPage(1).content << std::endl;
	return 0;
}