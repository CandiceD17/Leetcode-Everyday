class Solution {
public:
    int to_num(string s){
        stringstream ss(s);
        int n;
        ss>>n;
        return n;
    }
    
    bool helper(string temp){
        if(temp.size()<=0 || temp.size()>3 || (temp[0]=='0' && temp.size()>1) ||to_num(temp)>255)
            return false;
        return true;
    }
   
    vector<string> restoreIpAddresses(string s) {
        int n = s.size();
        vector<string> res;
        for(int i=1; i<4; i++){
            for(int j=i+1; j<i+4; j++){
                for(int k=j+1; k<j+4; k++){
                    if(i<n && j<n && k<n){
                        string temp1 = s.substr(0,i);
                        string temp2 = s.substr(i,j-i);
                        string temp3 = s.substr(j, k-j);
                        string temp4 = s.substr(k);
                        //cout<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<endl;
                        if(helper(temp1)&&helper(temp2)&&helper(temp3)&&helper(temp4)){
                            string result = temp1+"."+temp2+"."+temp3+"."+temp4;
                            res.push_back(result);
                        }
                    }
                }
            }
        }
        return res;
    }
};

2019.08.06
