
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = (ax2-ax1)*(ay2-ay1);
        int area2 = (bx2-bx1)*(by2-by1);
        // cout<<area1<<"  "<<area2<<endl;
     
        int x1=max(ax1,bx1);
        int x2=min(ax2,bx2);
        int y1=max(ay1,by1);
        int y2=min(ay2,by2);
        int commonarea=0;
        if(x2>=x1 && y2>=y1){
            commonarea=((x2-x1) * (y2-y1));
        }
        // cout<<"common "<<commonarea<<endl;
        return area1+area2-commonarea;
        
        
        
    }
};
