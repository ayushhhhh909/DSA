class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xnear;
        int ynear;
        int distance;
        if(x1>xCenter){
            xnear=x1;
        }
        else if(x2<xCenter){
            xnear=x2;
        }
        else{
            xnear=xCenter;
        }
        if(y1>yCenter){
            ynear=y1;
        }
        else if(y2<yCenter){
            ynear=y2;
        }
        else{
        ynear=yCenter;
        }
        distance=sqrt(abs((xCenter-xnear)*(xCenter-xnear)+(yCenter-ynear)*(yCenter-ynear)));
        if(distance>radius){
            return false;
        }
        return true;

        


        
    }
};