import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        HashMap<String,String>table=new HashMap<String,String>();
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            String b = in.next();
            int c = in.nextInt();
            table.put(b, Character.toString((char) c));
        }
        String s = in.next();
        String out="";
        String str="";
        int index=0;
        for(int i=0;i<s.length();i++)
        {   
            if(str=="")
            {
                index=i;
            }
            str+=s.charAt(i);
            if(table.containsKey(str))
            {
                out+=table.get(str);
                str="";
            }
        }

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
        if(str.isEmpty()){
        System.out.println(out);
        }
        else
        {
            System.out.println("DECODE FAIL AT INDEX "+index);
        }
        //System.out.println("DECODE FAIL AT INDEX i");

    }
}
