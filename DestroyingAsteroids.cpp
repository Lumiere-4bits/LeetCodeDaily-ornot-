class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        // 3 5 9 19 21
        long long mass1= mass;
        for (int i=0; i<asteroids.size(); i++){
            if (mass>=asteroids[i]){
                mass+= asteroids[i];
            }
            else return 0;
        }
        return 1;
    }
};