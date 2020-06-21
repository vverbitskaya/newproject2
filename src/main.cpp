#include <iostream>
#include <string>
#include <vector>


struct autor {
	std::string firstName;
	std::string secondName;
};

enum Mounth {
	Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

struct Page {
	std::string content;
};

struct date {
	int day;
	Mounth mounth;
	int year;
};

struct book {
	book() {
		pageCount_ = 0;
		date_.day = 1;
		date_.mounth = Mounth::Jan;
		date_.year = 2000;
	}

	// fields
	int pageCount_;
	autor autor_;
	date date_;
	std::vector<Page> pages_;
	// methods
	Page getPage(int pageNumber) {
		return pages_[pageNumber];
	}

	void addPage(Page p) {
		pages_.push_back(p);
		pageCount_++;
	};
};

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