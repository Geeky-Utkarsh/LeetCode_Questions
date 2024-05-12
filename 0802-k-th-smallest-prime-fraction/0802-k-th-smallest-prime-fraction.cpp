class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
       vector<pair<int,int>>fractions;
       int n = arr.size();
    
       // Generate all possible fractions
       for(int i=0; i<n; ++i) {
          for(int j=i+1; j<n; ++j) {
            fractions.push_back({arr[i], arr[j]});
        }
    }
    
    // Sort the fractions based on the fraction value
    sort(fractions.begin(), fractions.end(), [&](const pair<int, int>& a, const pair<int,int>& b) {
        // a.first*a.second<b.first*b.second;
        return a.first*b.second<b.first*a.second;
    });
    
    // Return the kth smallest fraction
    return {fractions[k-1].first, fractions[k-1].second};

    }
};