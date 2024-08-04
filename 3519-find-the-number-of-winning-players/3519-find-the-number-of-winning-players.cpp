class Solution{
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
    // Player 1 wins , if they pick at leat 2 balls of the same color 
    // Player i wins if they pick at leasti + 1 balls of the same color.

    // return the number of players who win the game 

    vector<unordered_map<int,int>>f(n);

    for(int i=0; i<pick.size(); i++){

        int player_ith=pick[i][0];
        int color_ith=pick[i][1];

        f[player_ith][color_ith]++;
    }
    int winner_cnt=0;

    // every ith player is winner who holds more color ball than its index

    for(int i=0; i<n; i++){
        bool is_winner=false;

        for(auto &e : f[i]){
            if(e.second>i){
                winner_cnt++;
                break;
            }
        }
    }
    return winner_cnt;

    }
};
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class Solution1{
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
    // Player 1 wins , if they pick at leat 2 balls of the same color 
    // Player i wins if they pick at leasti + 1 balls of the same color.

    // return the number of players who win the game 

    // vector<vector<int,int>>f(n,vector<int>(11,0));
        vector<vector<int>>f(n,vector<int>(11,0));


    for(int i=0; i<pick.size(); i++){
        
        int player_ith=pick[i][0];
        int color_ith=pick[i][1];

        f[player_ith][color_ith]++;
    }
    int winner_cnt=0;

    // every ith player is winner who holds more color ball than its index

    for(int i=0; i<n; i++){
        for(int j=0; j<=10; j++){
            if(f[i][j]>i){
                winner_cnt++;
                break;
            }
        }
    }
    return winner_cnt;

    }
};