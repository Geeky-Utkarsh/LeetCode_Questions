// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k) {
        
//         // Brute Force TC->O(n)
//         int n=arr.size();
//         int maxi_ele=*max_element(arr.begin(), arr.end());

//         if(k>=n)
//           return maxi_ele;
        
//         int winner=arr[0];
//         int wins=0;  // Streak

//         for(int i=0; i<n; i++){
//             if(winner>arr[i]) {
//                 wins++;
//             }
//             else{
//                 winner=arr[i];
//                 wins=1;
//             }

//             if(wins==k || winner==maxi_ele)
//                return winner;
//         }
//         return winner;
//     }
// };
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int winner = arr[0];
        int winCnt = 0;
        
        for (int i=1; i<n; i++) {
            if (arr[i]>winner) {
                winner=arr[i];
                winCnt=1;
            } else{
                winCnt++;
            }
            
            if (winCnt==k) {
                return winner; // Winner found within a single game
            }
        }
        
        // If k consecutive wins within a game are not reached, the winner is the largest element in the array
        return winner;
    }
};
