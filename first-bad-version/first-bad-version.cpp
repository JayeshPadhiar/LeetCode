// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n;
        int m = l+(r-l)/2;
        while(l<=r)
        {
            m = l+(r-l)/2;
            //cout<<m<<endl;
            if(isBadVersion(m))
                r = m-1;
            else
                l = m+1;
        }
        if(!isBadVersion(m))
            return m+1;
        return m;
    }
};