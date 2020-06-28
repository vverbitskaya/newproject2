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
	book();

	// fields
	int pageCount_;
	autor autor_;
	date date_;
	std::vector<Page> pages_;
	// methods
	Page getPage(int pageNumber);

	void addPage(Page p);
};
