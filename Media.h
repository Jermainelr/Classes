#pragma once

#include <iostream>
#include <string.h>

using namespace std;

const int TYPE_MEDIA = 0;
const int TYPE_VIDEOGAMES = 1;
const int TYPE_MUSIC = 2;
const int TYPE_MOVIES = 3;

class Media {
public: 
	Media();
	virtual ~Media();
	virtual int getType();
	string* getTitle();
	void setTitle(string* newTitle);
	int getYear();
	void setYear(int newYear);
	virtual void print();
	
private:
	string* title;
	int year;
};

