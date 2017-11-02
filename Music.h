#include "Media.h"

using namespace std;

class Music : public Media {
public:
	Music();
	virtual ~Music();
	virtual int getType();
	string* getArtist();
	void setArtist(string* newArtist);
	string* getDuration();
	void setDuration(string* newDuration);
	string* getPublisher();
	void setPublisher(string* newPublisher);
	virtual void print();
	
private:
	string* artist;
	string* duration;
	string* publisher;
};
