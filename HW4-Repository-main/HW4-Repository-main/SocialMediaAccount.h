#ifndef Social
#define Social

using namespace std;

const int maxFollowers = 50;
const int maxFollowed = 50;

template<class T>
class SocialMediaAccount {
private:
	T handler;
	vector<T> followers;
	vector<T> followed;
	int followerCount;
	int followedCount;
	bool private_;

public:
	SocialMediaAccount(T handler, bool private_ = true) : handler(handler), private_(private_) {
		followerCount = 0;
		followedCount = 0;
	}
	void setHandler(T handler) { this->handler = handler; }
	T getHandler() const { return handler; }

	void setPrivate(bool private_) { this->private_ = private_; }
	bool getPrivate() const { return private_; }

	void addFollower(T user) {
		if (followerCount < maxFollowers) {
			followers.push_back(user);
			followerCount++;
		}
		else {
			cout << "Cannot add more followers." << endl;
		}
	}

	void addFollowed(T user) {
		if (followedCount < maxFollowed) {
			followed.push_back(user);
			followedCount++;
		}
		else {
			cout << "Cannot follow more accounts." << endl;
		}
	}

	void displayFollowers() {
		if (!private_) {
			cout << "Followers: ";
			for (const auto& follower : followers) {
				cout << follower << " ";
			}
			cout << endl;
		}
		else {
			cout << "Account is not available." << endl;
		}
	}

	void displayFollowed() {
		if (!private_) {
			cout << "Followed accounts: ";
			for (const auto& followed_account : followed) {
				cout << followed_account << " ";
			}
			cout << endl;
		}
		else {
			cout << "Account is not available." << endl;
		}
	}
};

#endif