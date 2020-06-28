#include "book_class.hpp"

void book:: addPage(Page p) {
	pages_.push_back(p);
	pageCount_++;
}

Page book::getPage(int pageNumber) {
	return pages_[pageNumber];
}

book::book() {
	pageCount_ = 0;
	date_.day = 1;
	date_.mounth = Mounth::Jan;
	date_.year = 2000;
}
