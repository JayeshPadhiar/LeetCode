class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;

        for(int i=0; i<sentences.size(); i++){

            int spaces = 0;

            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' ')
                    spaces++;
            }

            cout<<spaces<<endl;
            ans = (spaces > ans) ? spaces : ans;
        }

        return ans+1;
    }
};