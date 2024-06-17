class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        return recur(tx, ty, sx, sy);
    }
    
    bool recur(int curx, int cury, int sx, int sy) {
        if (curx == sx && cury == sy) {
            return true;
        }

        if (curx > sx && cury == sy) {
            int diff = curx - sx;
            if (diff % cury == 0) {
                return true;
            } else {
                return false;
            }
        } else if (curx == sx && cury > sy) {
            int diff = cury - sy;
            if (diff % curx == 0) {
                return true;
            } else {
                return false;
            }
        }

        if (curx < sx || cury < sy) {
            return false;
        }
        if (curx == cury) {
            return false;
        }

        if (curx > cury) {
            // if we can reduce a lot, then do it

            return recur(curx - cury, cury, sx, sy);
        } else {
            return recur(curx, cury-curx, sx, sy);
        }
    }
};
