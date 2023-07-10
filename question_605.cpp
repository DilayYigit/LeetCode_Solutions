class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;
        if (flowerbed.size() == 1) {
            if (n == 1 && flowerbed[0] == 0) return true;
            return false;
        }
        if (flowerbed.size() == 2) {
            if (flowerbed[0] == 1 || flowerbed[1] == 1) return false;
            if (n == 1) return true;
        }
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            n--;
        } 
        if (n == 0) return true;
        for (int i = 1; i < flowerbed.size() - 1; i++) {
            if (flowerbed[i-1] == 1) continue; 
            if (flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
            if (n == 0) return true;
        }
        if (n == 0) return true;
        if(n == 1) {
            if(flowerbed[flowerbed.size() - 2] == 0 && flowerbed[flowerbed.size() - 1] == 0) {
                return true;
            }
            return false;
        }
        return false;   
    } 
    /*
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed.at(i) = 1; // Place a flower
                n--; // Decrement the number of flowers to be placed
            }
            
            if (n <= 0)
                return true;
        }
        
        return false;
    }
    */
};
