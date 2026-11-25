
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> mp;

        for(string email : emails) {
            string temp = "";
            int i = 0;

            while(email[i] != '@' && email[i] != '+') {
                if(email[i] != '.') {
                    temp += email[i];
                }
                i++;
            }

            while(email[i] != '@') {
                i++;
            }

            temp += email.substr(i);

            mp[temp]++;
        }

        return mp.size();
    }
};
