// LC 1401

class Solution {
public:
    bool isIntersecting(int &x, int &y, int &r, int &xc, int &yc) {

        return (x - xc)*(x - xc) + (y - yc)*(y - yc) <= r*r;
    }
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        
        if((x1 <= xc && xc <= x2) && (y1 <= yc && yc <= y2)) 
        return true;

        for(int x=x1; x<=x2; x++) {
            if(isIntersecting(x, y1, r, xc, yc) || isIntersecting(x, y2, r, xc, yc)) return true;
        }

        for(int y=y1; y<=y2; y++) {
            if(isIntersecting(x1, y, r, xc, yc) || isIntersecting(x2, y, r, xc, yc)) return true;
        }

        return false;
    }
};