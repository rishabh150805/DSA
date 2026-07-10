class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(),
             [](vector<int> &a, vector<int> &b) {
                 return a[1] > b[1];
             });

        int totalUnits = 0;

        for (int i = 0; i < boxTypes.size(); i++) {

            int numberOfBoxes = boxTypes[i][0];
            int unitsPerBox = boxTypes[i][1];

            int boxesTaken = min(numberOfBoxes, truckSize);

            totalUnits += boxesTaken * unitsPerBox;

            truckSize -= boxesTaken;

            if (truckSize == 0)
              break;
        }

        return totalUnits;
    }
};