#include "SocialMediaAccount.h"
template<class T>
class Instagram : public SocialMediaAccount<T> {
private:
	int likeCount = 0;

public:
	Instagram(T handler, bool private_ = true) : SocialMediaAccount<T>(handler, private_) {}

	void Like() { likeCount++; }

	int getLikeCount() const { return likeCount; }
	void setLikeCount(int likeCount) { this->likeCount = likeCount; }
};