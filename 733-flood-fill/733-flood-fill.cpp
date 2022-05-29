class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc] == newColor) return image;
        fillColor(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
    
    void fillColor(vector<vector<int>> &image, int sr, int sc, int curColor, int newColor){
        if(sr<0 or sr>=image.size() or sc<0 or sc>=image[0].size() or image[sr][sc]!=curColor) return;
        
        image[sr][sc] = newColor;
        
        fillColor(image, sr+1, sc, curColor, newColor);
        fillColor(image, sr-1, sc, curColor, newColor);
        fillColor(image, sr, sc+1, curColor, newColor);
        fillColor(image, sr, sc-1, curColor, newColor);
        
    }
    
};