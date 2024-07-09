class Twitter {
public:
    vector<pair<int, int>> posts;
    unordered_map<int, unordered_set<int>> followers;
    Twitter() {
        posts = vector<pair<int, int>>();
    }
    
    void postTweet(int userId, int tweetId) {
        if (followers.count(userId) == 0) {
            followers[userId].insert(userId);
        }
        posts.push_back({userId, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        unordered_set<int> people = followers[userId];
        vector<int> feed;

        int i = posts.size() - 1;
        while (feed.size() < 10 && i >= 0) {
            if (people.count(posts[i].first) != 0) {
                feed.push_back(posts[i].second);
            }
            i--;
        }
        return feed;
    }
    
    void follow(int followerId, int followeeId) {
        if (followers.count(followerId) == 0) {
            followers[followerId].insert(followerId);
        }
        followers[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followers[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
