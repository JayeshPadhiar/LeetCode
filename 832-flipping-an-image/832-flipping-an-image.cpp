class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        
        for(int i=0; i<img.size(); i++){
            
            int x = 0;
            int y = img[i].size()-1;
            
            while(y >= x){
                int temp = img[i][x];
                img[i][x] = img[i][y];
                img[i][y] = temp;
                
                x++;
                y--;
            }
            
            for(int j=0; j<img[i].size(); j++){
                if(img[i][j]==0)
                    img[i][j] = 1;
                else
                    img[i][j] = 0;
            }
        }
        
        
        return img;
        
    }
};