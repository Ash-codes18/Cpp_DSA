class Solution {
public:
    bool isPowerOfTwo(int n) {
       int i = 0;
    bool flag = false;
    while (i <=30)
    {
        int checker = pow(2, i);
        if (checker == n)
        {
            flag = true;
            break;
        }
        i++;
    }
    if (flag)
    {
         return true;
    }
    else
    {
        return false;
    }
    }
};