class Solution {
public:
    int vis[1000];
    bool canVisitAllRooms(vector<vector<int>>& rooms, int v = 0) {
        vis[v] = 1;
        for (int u : rooms[v])
            if (!vis[u])
                vis[u] = 1, canVisitAllRooms(rooms, u);
        for (int v=0; v<rooms.size(); v++)
            if (!vis[v])
                return false;
        return true;
    }
};

// https://leetcode.com/problems/keys-and-rooms/