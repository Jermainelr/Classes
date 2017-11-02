#include <iostream>
#include <vector>
#include "Media.h"
#include "VideoGames.h"
#include "Music.h"
#include "Movies.h"

using namespace std;

void addMedia(vector<Media *> & media);
void addVideoGames(vector<Media *> & media);
void addMusic(vector<Media *> & media);
void addMovies(vector<Media *> & media);
void searchMedia(vector<Media *> & media);
void deleteMedia(vector<Media *> & media);

int main () {
	vector<Media *> media;
	char command[81];
	do {
		cout << "Enter Command (ADD, SEARCH, DELETE or QUIT)" << endl;
		cin >> command;
		if (strcmp(command,"ADD") == 0) {
			addMedia(media);
		}
		else if (strcmp(command, "SEARCH") == 0) {
			searchMedia(media);
		}
		else if (strcmp(command, "DELETE") == 0) {
			deleteMedia(media);
		}
		else if (strcmp(command, "QUIT") != 0) {
			cout << "Invalid Command" << endl;
		}
	} while(strcmp(command, "QUIT") != 0); 
}

void addMedia(vector<Media *> & media) {
	char mediaType[81];
	cout << "Enter Media Type (VideoGames, Music, Movies)" << endl;
	cin >> mediaType;
	if(strcmp(mediaType, "VideoGames") == 0) {
		addVideoGames(media);
	}
	else if(strcmp(mediaType, "Music") == 0) {
		addMusic(media);
	}
	else if(strcmp(mediaType, "Movies") == 0) {
		addMovies(media);
	}
	else {
		cout << "Invalid Type" << endl;
	}
}

void addVideoGames(vector<Media *> & media) {
	VideoGames *videoGames =  new VideoGames;
	char input[81];
	int year;
	
	cout << "Enter Title" << endl;
	cin >> input;
	videoGames->setTitle(new string(input));
	
	cout << "Enter Year" << endl;
	cin >> year;
	videoGames->setYear(year);
	 
	cout << "Enter Publisher" << endl;
	cin >> input;
	videoGames->setPublisher(new string(input));
	
	cout << "Enter Rating" << endl;
	cin >> input;
	videoGames->setRating(new string(input));
	media.push_back(videoGames);
}

void addMusic(vector<Media *> & media) {
    Music *music = new Music;
    char input[81];
    int year;

	cout << "Enter Title" << endl;
	cin >> input;
	music->setTitle(new string(input));

	cout << "Enter Artist" << endl;
	cin >> input;
	music->setArtist(new string(input));

	cout << "Enter Year" << endl;
	cin >> year;
	music->setYear(year);

	cout << "Enter Duration" << endl;
	cin >> input;
	music->setDuration(new string(input));

	cout << "Enter Publisher" << endl;
	cin >> input;
	music->setPublisher(new string(input));
	media.push_back(music);
}

void addMovies(vector<Media *> & media) {
       Movies *movies = new Movies;
       char input[81];
    int year;

    cout << "Enter Title" << endl;
    cin >> input;
    movies->setTitle(new string(input));

    cout << "Enter Director" << endl;
    cin >> input;
    movies->setDirector(new string(input));

	cout << "Enter Year" << endl;
	cin >> year;
	movies->setYear(year);

	cout << "Enter Duration" << endl;
	cin >> input;
	movies->setDuration(new string(input));

	cout << "Enter Rating" << endl;
	cin >> input;
	movies->setRating(new string(input));
	media.push_back(movies);
}
	
void searchMedia(vector<Media *> & media) {
	char input[81];
	int year;
	cout << "Would you like to search by Title or by Year?" << endl;
	cin >> input;
	if(strcmp(input, "Title") == 0) {
		cout << "Enter Title" << endl;
		cin >> input;
		for (vector<Media *>::iterator it = media.begin() ; it != media.end(); ++it) { 
			if (*((*it)->getTitle()) == input) {
				(*it)->print();
				cout << "------------------------------------------------------------------------" << endl;
			}
		}
	}
	else if (strcmp(input, "Year") == 0) {
		cout << "Enter Year" << endl;
		cin >> year;
		for (vector<Media *>::iterator it = media.begin() ; it != media.end(); ++it) { 
			if ((*it)->getYear() == year) {
				(*it)->print();
				cout << "------------------------------------------------------------------------" << endl;
			}
		}
	}
}

void deleteMedia(vector<Media *> & media) {
	char input[81];
	int year;
	cout << "Would you like to search Media to delete by Title or by Year?" << endl;
	cin >> input;
	if(strcmp(input, "Title") == 0) {
		cout << "Enter Title" << endl;
		cin >> input;
		for (vector<Media *>::iterator it = media.begin() ; it != media.end(); ++it) { 
			if (*((*it)->getTitle()) == input) {
				cout << "Found:" << endl;
				(*it)->print();
				cout << "Would you like to delete? (Y/N)" << endl;
				cin >> input;
				if(strcmp(input,"Y") == 0) {
					delete *it;
					media.erase(it);
					cout << "Deleted!" << endl;
				}
			}
		}
	}
	else if (strcmp(input, "Year") == 0) {
		cout << "Enter Year" << endl;
		cin >> year;
		for (vector<Media *>::iterator it = media.begin() ; it != media.end(); ++it) { 
			if ((*it)->getYear() == year) {
				cout << "Found:" << endl;
				(*it)->print();
				cout << "Would you like to delete? (Y/N)" << endl;
				cin >> input;
				if(strcmp(input,"Y") == 0) {
					delete *it;
					media.erase(it);
					cout << "Deleted!" << endl;
				}
			}
		}
	}
}
# Classes
