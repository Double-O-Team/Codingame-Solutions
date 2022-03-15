import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int r1 = in.nextInt();
     //   System.out.println(r1);
            String num=String.valueOf(r1);
            int r=Integer.parseInt(num);
            int number=Integer.parseInt(num);
            int count=0;
            while(number!=0){
                int digits=0;
            for(int i=0;i<num.length();i++)
            {   
                digits+=Integer.parseInt(String.valueOf(num.charAt(i)));
            }
           //  System.out.println(number+" "+digits+" "+String.valueOf(number+digits));
            if(number+digits==r)
            {
                //System.out.println(count);
                count++;
            }
            number--;
            num=String.valueOf(number);
            if(count>0){
                 System.out.println("YES");
                 return;
            }
            }

        System.out.println("NO");
    }
}
