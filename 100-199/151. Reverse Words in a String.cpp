class Solution {
public:
    string reverseWords(string s) {
        int size= s.size();
        if(size<1)
            return s;
        stack<string> container;
        string temp = "";
        for(int i=0; i<size; i++){
            if(s[i]==' ' && temp=="")
                continue;
            if(s[i]==' '){
                container.push(temp);
                temp = "";}
            else
                temp+=s[i];
        }
        if(temp!="")
            container.push(temp);
        string result="";
        while(!container.empty()){
            result+=container.top();
            container.pop();
            if(!container.empty())
                result+=" ";
        }
        return result;
    }
};

2019.08.20
