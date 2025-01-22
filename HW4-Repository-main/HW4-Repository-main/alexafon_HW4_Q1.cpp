#include <iostream>
#include <string>
#include <vector>
#include "SocialMediaAccount.h"
#include "Twitter.h"
#include "Instagram.h"
#include <ctime>
#include <cstdlib>
#include <random>

struct Profile {
	int userId;
	string username;
};

int main() {
	srand(time(0));

	Twitter<string> TS("TwitterS");
	Twitter<Profile> TP(Profile{ 1, "TwitterP" });

	Instagram<string> IS("InstaS");
	Instagram<Profile> IP(Profile{ 2, "InstaP" });

	TS.addFollower("Anonymous User");
	TS.addFollowed("Anonymous User");
	TS.displayFollowers();
	TS.displayFollowed();

	TP.addFollower(Profile{ 3, "Anonymous User" });
	TP.addFollowed(Profile{ 4, "Anonymous User" });
	TP.displayFollowers();
	TP.displayFollowed();

	IS.addFollower("Anonymous User");
	IS.addFollowed("Anonymous User");
	IS.displayFollowers();
	IS.displayFollowed();

	IP.addFollower(Profile{ 5, "Anonymous User" });
	IP.addFollowed(Profile{ 6, "Anonymous User" });
	IP.displayFollowers();
	IP.displayFollowed();

	return 0;

}

