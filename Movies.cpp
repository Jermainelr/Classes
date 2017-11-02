#include "Movies.h"

using namespace std;

Movies::Movies() {
}

Movies::~Movies() {
	delete duration;
	delete director;
	delete rating;
}

int Movies::getType() {
	return TYPE_MOVIES;
}

string* Movies::getRating() {
	return rating;
}

void Movies::setRating(string* newRating) {
	rating = newRating;
}

string* Movies::getDuration() {
	return duration;
}

void Movies::setDuration(string* newDuration) {
	duration = newDuration;
}

string* Movies::getDirector() {
	return director;
}

void Movies::setDirector(string* newDirector) {
	director = newDirector;
}

void Movies::print() {
	cout << "Title: " << *getTitle() << endl; 
	cout << "Year: " << getYear() << endl; 
	cout << "Director: " << *getDirector() << endl; 
	cout << "Rating: " << *getRating() << endl; 
	cout << "Duration: " << *getDuration() << endl; 
	
}