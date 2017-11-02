#include "VideoGames.h"

using namespace std;

VideoGames::VideoGames() {
}

VideoGames::~VideoGames() {
	delete publisher;
	delete rating;
}

int VideoGames::getType() {
	return TYPE_VIDEOGAMES;
}

string* VideoGames::getPublisher() {
	return publisher;
}

void VideoGames::setPublisher(string* newPublisher) {
	publisher = newPublisher;
}

string* VideoGames::getRating() {
	return rating;
}

void VideoGames::setRating(string* newRating) {
	rating = newRating;
}

void VideoGames::print() {
	cout << "Title: " << *getTitle() << endl; 
	cout << "Year: " << getYear() << endl; 
	cout << "Publisher: " << *getPublisher() << endl; 
	cout << "Rating: " << *getRating() << endl; 
	
}