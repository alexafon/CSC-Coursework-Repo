#ifndef Twitter_h
#define Twitter_h

#include "SocialMediaAccount.h"

template<class T>
class Twitter : public SocialMediaAccount<T> {
private:
	int retweetCount = 0;

public:
	Twitter(T handler, bool private_ = true) : SocialMediaAccount<T>(handler, private_) {}

	void RT() { retweetCount++; }

	int getRetweetCount() const { return retweetCount; }
	void setRetweetCount(int retweetCount) { this->retweetCount = retweetCount; }
};
#endif

