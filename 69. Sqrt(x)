class Solution {
public:
    int mySqrt(int x) 
    {
        //iterative binary search. lg(x) complexity.
        if(x == 0)
            return 0;
        long long int low, high, mid;
        low = 1; high = x;
        while(low < high - 1)
        {
            mid = (low + high)/2;
            if(mid * mid > x)
                high = mid;
            else if (mid * mid == x)
                return mid;
            else
                low = mid;
        }
        return low;
    }
};

    
