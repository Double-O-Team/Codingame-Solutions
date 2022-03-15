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
        long r1 = in.nextLong();
        long r2 = in.nextLong();
        int n=0;
        while(n<20000000)
        {
            String num=String.valueOf(r1);
            String num1=String.valueOf(r2);
            if(r2>r1){
            for(int i=0;i<num.length();i++)
            {
                r1+=Integer.parseInt(String.valueOf(num.charAt(i)));
            }
            }
            if(r1==r2)
            {
                System.out.print(r1);
                break;
            }
            if(r1>r2){
            for(int i=0;i<num1.length();i++)
            {
                r2+=Integer.parseInt( String.valueOf(num1.charAt(i)));
            }
            }
            if(r1==r2)
            {
                System.out.print(r1);
                break;
            }
            n++;
        }
    }
}
