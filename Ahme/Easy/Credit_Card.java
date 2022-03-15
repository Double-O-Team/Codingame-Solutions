import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        ArrayList<Integer>second=new ArrayList<>();
        ArrayList<Integer>odd=new ArrayList<>();
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < n; i++) {
            String card = in.nextLine();
            int sum1=0;
            int sum2=0;
            String card1=card.replace(" ", "");
            for(int j=card1.length()-1;j>=0;j=j-2)
            {
                if(j!=0){
                second.add(Integer.parseInt(String.valueOf(card1.charAt(j-1))));
                }
                odd.add(Integer.parseInt(String.valueOf(card1.charAt(j))));
            }

            for (int j=0;j<second.size();j++) {
                int value=second.get(j)*2;
                if(value>9)
                {
                    value=value-9;
                }
                sum1+=value;
                sum2+=odd.get(j);
            }
            sum1=sum1+sum2;
           second.clear();
           odd.clear();
            if(sum1%10==0)
            {
             System.out.println("YES");
            }
            else
             System.out.println("NO");

        }


        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

       // System.out.println("YES or NO");
    }
}
