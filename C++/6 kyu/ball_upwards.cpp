// https://www.codewars.com/kata/566be96bb3174e155300001b

#import <math.h>

class Ball
{
    public: 
        static int maxBall(int v0){
            // t = (v1 - v0) / a
            // ((0 - v0) / 9.81) * (1000 / 3600) * 10
            return round(v0 / (0.981*3.6));
    }
};