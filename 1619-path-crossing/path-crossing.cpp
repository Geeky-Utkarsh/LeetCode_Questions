class Solution {
public:
    bool isPathCrossing(string path) {
        // set<pair<int,int>>set;
        unordered_set<string>track;
        track.insert("0,0");
        int x=0, y=0;

        for(char d: path){
            if(d=='N')
              y++;
            else if(d=='S')
               y--;
            else if(d=='E')
               x++;
            else if(d=='W')
               x--;
            
            if(track.count(to_string(x)+","+to_string(y)))
              return true;
            track.insert(to_string(x)+","+to_string(y));
        }
        return false;
    }
};