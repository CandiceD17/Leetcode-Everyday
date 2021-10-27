Using stack:

class Solution {
public:
    string simplifyPath(string path) {
        int size = path.size();
        if(size<=1)
            return "/";
        stack<string> container;
        string temp = "";
        path+="/";
        for(int i=0; i<=size; i++){
            if(path[i]!='/')
                temp+=path[i];
            else if(temp==".."){
                if(!container.empty())
                    container.pop();
                temp="";
            }
            else if(temp==".")
                temp="";
            else if(temp!=""){
                container.push(temp);
                temp = "";
            }
        }
        if(container.empty())
            return "/";
        string result = "";
        while(!container.empty()){
            result = "/"+ container.top() + result;
            container.pop();
        }
        return result;
    }
};

2019.08.02
