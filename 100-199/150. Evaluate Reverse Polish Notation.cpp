class Solution {
public:
    int toNum(string a){
        stringstream ss(a);
        int n;
        ss>>n;
        return n;
    }
    int evalRPN(vector<string>& tokens) {
        int size = tokens.size();
        if(size==0)
            return 0;
        stack<int> container;
        for(int i=0; i<size; i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i] == "/"){
                int sec = container.top();
                container.pop();
                int first = container.top();
                container.pop();
                if(tokens[i]=="+") 
                    container.push(first+sec);
                else if (tokens[i]=="-")
                    container.push(first-sec);
                else if(tokens[i]=="*")
                    container.push(first*sec);
                else
                    container.push(first/sec);
            }
            else{
                int temp = toNum(tokens[i]);
                container.push(temp);
            }
        }
        return container.top(); 
    }
};

2019.08.19
