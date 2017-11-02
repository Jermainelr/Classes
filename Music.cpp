#include "Music.h"

using namespace std;

Music::Music() {
}

Music::~Music() {
	delete publisher;
	delete artist;
	delete duration;
}

int Music::getType() {
	return TYPE_MUSIC;
}

string* Music::getDuration() {
	return duration;
}

void Music::setDuration(string* newDuration) {
	duration = newDuration;
}

string* Music::getPublisher() {
	return publisher;
}

void Music::setPublisher(string* newPublisher) {
	publisher = newPublisher;
}

string* Music::getArtist() {
	return artist;
}

void Music::setArtist(string* newArtist) {
	artist = newArtist;
}

void Music::print() {
	cout << "Title: " << *getTitle() << endl; 
	cout << "Year: " << getYear() << endl; 
	cout << "Artist: " << *getArtist() << endl; 
	cout << "Publisher: " << *getPublisher() << endl; 
	cout << "Duration: " << *getDuration() << endl; 
	
}