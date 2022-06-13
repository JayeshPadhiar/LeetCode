class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int steps = 0;
        int cap = capacity;

        for(int i=0; i<plants.size(); i++){

            if(plants[i] > cap){    
                steps += i;
                steps += i;
                cap = capacity;
            }    
            cap -= plants[i];
            steps++;
        }

        return steps;
    }
};