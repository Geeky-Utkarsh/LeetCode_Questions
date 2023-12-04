class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        int n=points.size();
        int stepsCount=0;

        for(int i=0; i<points.size()-1; i++){ // we have to reach points [n-1]
            // i to i+1

            int x1=points[i][0];
            int y1=points[i][1];

            int x2=points[i+1][0];
            int y2=points[i+1][1];

            int dy=abs(y2-y1);
            int dx=abs(x2-x1);

            stepsCount+=(min(dx,dy)+abs(dy-dx));

        }
        return stepsCount;
    }
};