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
        int ROUNDS = in.nextInt();
        int CASH = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < ROUNDS; i++) {
            String PLAY = in.nextLine();
            String[] split= PLAY.split(" ");
            if(split.length<3)
            {
                if(split[1].equals("ODD")&&Integer.parseInt(split[0])%2!=0)
                {  
                    CASH+=Math.round(CASH/4);
                }
                else if(split[1].equals("EVEN")&&Integer.parseInt(split[0])%2==0&&Integer.parseInt(split[0])!=0)
                {
                     CASH+=Math.round(CASH/4);
                }
                else
                {
                     CASH-=Math.round(CASH/4);
                }
            }
            else
            {
                  if(split[1].equals("PLAIN")&&Integer.parseInt(split[0])==Integer.parseInt(split[2]))
                {
                    CASH+=Math.round(CASH/4)*35;
                }
                else
                {
                     CASH-=Math.round(CASH/4);
                }
            }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(CASH-3);
    }
}
