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
        String b = in.nextLine();
        int max=0;
      //  System.out.println(b);
        String []token=b.split("0");
        for (int i=1;i<token.length;i++)
        {
            if(token[i].length()+token[i-1].length()>max)
            {
                max=token[i].length()+token[i-1].length();
            }
        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(max+1);
    }
}
