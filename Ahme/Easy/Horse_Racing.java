import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        List<Integer>strength=new ArrayList<Integer>();
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        for (int i = 0; i < N; i++) {
            int pi = in.nextInt();
            strength.add(pi);
        }
        Collections.sort(strength);
        int mindiff=strength.get(1)-strength.get(0);
        for (int i = 1; i < N; i++) {
           if(strength.get(i)-strength.get(i-1)<mindiff)
           {
               mindiff=strength.get(i)-strength.get(i-1);
           }
        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(mindiff);
    }
}
