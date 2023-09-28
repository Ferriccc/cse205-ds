class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      queue<int> q;
      for (int i = -1; ++i < tickets.size();) q.push(i);

      int time = 0;

      while (tickets[k] > 0) {
        int person = q.front();
        q.pop();

        tickets[person]--;
        if (tickets[person] > 0) q.push(person);
        
        time++;
      }

      return time;
    }
};
