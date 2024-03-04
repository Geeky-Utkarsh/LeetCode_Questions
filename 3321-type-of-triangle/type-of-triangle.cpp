class Solution {
public:
    string triangleType(vector<int>& nums) {
        int side1=nums[0];
        int side2=nums[1];
        int side3=nums[2];

        if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2){
        if(side1==side2 && side2==side3)
            return "equilateral";
        else if(side1!=side2 && side2!=side3 && side3!=side1)
            return "scalene";
        else if((side1==side2 && side2!=side3) || (side2==side3 && side3!=side1) || (side3==side1 && side1!=side2) ) 
            return "isosceles";
        }
        return "none";
    }
};