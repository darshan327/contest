// 3894. Traffic Signal Color

//  intuition :  the problem is easy, we should to return the state of the signal based on the value of timer given.  
 // Time complexity : O(1)( constant time)
 //space complexity : O(1)(constant space)


    class Solution {
        public:
          string trafficSignal(int timer) {
            if(timer==0){
                return "Green";
            }else if(timer==30){
                return "Orange";
            }else if(timer>30 && timer<=90){
                return "Red";
        }
        return "Invalid";
    }
};