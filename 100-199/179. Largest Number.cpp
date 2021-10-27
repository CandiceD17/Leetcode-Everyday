bool compare(const string& a, const string& b){
    string first = a+b;
    string second = b+a;
    return (first<second);
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
            return "0";
        vector<string> str;
        bool number = false;
        for(int i=0; i<size; i++){
            if(nums[i]>0)
                number = true;
            str.push_back(to_string(nums[i]));}
        if(!number)
            return "0";
        string res = "";
        sort(str.begin(), str.end(), &compare);
        for(int i=size-1; i>=0; i--)
            res+=str[i];
        return res;
    }
};

2019.08.26
