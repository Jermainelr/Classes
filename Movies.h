#include "Media.h"

using namespace std;

class Movies : public Media {
public:
	Movies();
	virtual ~Movies();
	virtual int getType();
	string* getDirector();
	void setDirector(string* newDirector);
	string* getDuration();
	void setDuration(string* newDuration);
	string* getRating();
	void setRating(string* newRating);	
	virtual void print();
	
private:
	string* director;
	string* duration;
	string* rating;
};
