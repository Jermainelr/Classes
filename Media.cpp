#include "Media.h"

using namespace std;

Media::Media() {
}

Media::~Media() {
	delete title;
}

int Media::getType() {
	return TYPE_MEDIA;
}

string* Media::getTitle() {
	return title;
}

void Media::setTitle(string* newTitle) {
	title = newTitle;
}

int Media::getYear() {
	return year;
}

void Media::setYear(int newYear) {
	year = newYear;
}

void Media::print() {
}# Classes
