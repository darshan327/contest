// Leetcode Number: 3899. Angles of a Triangle

  /* Explanation: In order to find the positive area, it should satisfy the condition a+b>c, a+c>b, b+c>a. if not, return empty array.
  Cosine rule: A=acos((b^2+c^2-a^2)/(2*b*c)), B=acos((a^2+c^2-b^2)/(2*a*c)), C=acos((a^2+b^2-c^2)/(2*a*b))
  then we should convert the angle radian to degree (degree = radian * 180 / π), and sort the angles in ascending order. Finally, return the angles in an array.
  */
 // time complexity: O(1)
 // space complexity: O(1)

class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        int a=sides[0],b=sides[1],c=sides[2];
        if(a+b<=c || a+c<=b || b+c<=a){
            return {};
        }
           double A=acos((b*b+c*c-a*a)/(2.0*b*c));
           double B=acos((a*a+c*c-b*b)/(2.0*a*c));
           double C=acos((a*a+b*b-c*c)/(2.0*a*b));
          double DA= (A*180)/M_PI;
           double DB=(B*180)/M_PI;
         double DC=(C*180)/M_PI;
          if(DA>DB) swap(DA,DB);
           if(DA>DC) swap(DA,DC);
        if(DB>DC) swap(DB,DC);
        return {DA,DB,DC};
    }
};