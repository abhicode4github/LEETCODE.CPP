reverse at Integer, and return 0 if the  value is out of the range i.e, b/w 2^-31 to 2^31

/// SOLUTION   

class Solution {
public:
    int reverse(int x) {

        int rev=0,digit;

        while(x!=0)
        {
            digit=x%10;

               if( (rev>INT_MAX/10) || (rev<INT_MIN/10) )
            {
                return 0;
            }

           


            rev=(rev*10)+digit;

           
           
            x=x/10;
        }
        return rev;
        
    }
};
