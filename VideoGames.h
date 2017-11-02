#include "Media.h"

using namespace std;

class VideoGames : public Media {
public:
	VideoGames();
	virtual ~VideoGames();
	virtual int getType();
	string* getPublisher();
	void setPublisher(string* newPublisher);	
	string* getRating();
	void setRating(string* newRating);	
	virtual void print();
	
private:
	string* publisher;
	string* rating;
};
