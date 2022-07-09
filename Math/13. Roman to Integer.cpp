class Solution {
public:
    int romanToInt(string s) 
    {
      //can be made cleaner using unordered_map.
        int sum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'I') 
                sum += 1;
            else if (s[i] == 'V')
                sum += 5;
            else if (s[i] == 'X')
                sum += 10;
            else if (s[i] == 'L')
                sum += 50;
            else if (s[i] == 'C')
                sum += 100;
            else if (s[i] == 'D')
                sum += 500;
            else
                sum += 1000;
            
            if(i>=1)
            {
                if((s[i] == 'V' || s[i] == 'X') && (s[i-1] == 'I')) 
                    sum -= (2*1);
                if((s[i] == 'L' || s[i] == 'C') && (s[i-1] == 'X')) 
                    sum -= (2*10);
                if((s[i] == 'D' || s[i] == 'M') && (s[i-1] == 'C')) 
                    sum -= (2*100);
            }
        }
        return sum;
    }
};
