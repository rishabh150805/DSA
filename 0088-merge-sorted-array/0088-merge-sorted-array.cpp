class Solution {
    public:
     void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
       vector <int> aux;
       int i =0, j= 0;
       while(i<m && j<n){
          if(num1[i]<num2[j]){
            aux.push_back(num1[i]);
            i++;
            }else if(num1[i]>num2[j]){
            aux.push_back(num2[j]);
            j++;
            }else{
                aux.push_back(num1[i]);
                 aux.push_back(num2[j]);
                i++;
                j++;
            }
       }
       while(i<m){
         aux.push_back(num1[i]);
         i++;
       } 
       while(j<n){
         aux.push_back(num2[j]);
         j++;
       }
       for(int id=0;id<n+m;id++) 
          num1[id]= aux[id];
    }
};