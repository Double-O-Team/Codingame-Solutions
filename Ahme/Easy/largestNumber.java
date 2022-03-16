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
        int number = in.nextInt();
        String num=String.valueOf(number);
        int D = in.nextInt();
        ArrayList<Integer>values=new ArrayList<>();
            for(int i=0;i<num.length();i++)
            {
                if(number%D==0)
                {
                    values.add(number);
                }
                String result = num.substring(0, i) + num.substring(i+1);
                number=Integer.valueOf(result);
            }
             for(int i=0;i<num.length();i++)
            {
                for(int j=0;j<num.length();j++)
            {
                if(number%D==0)
                {
                    values.add(number);
                }
                String result="";
                String result2="";
                if(i!=num.length()-1){
                 result = num.substring(0, i) + num.substring(i+1);
                }
                else
                {
                result = num.substring(0, i);
                }
                if(j!=num.length()-1){
                 result2= result.substring(0, j) + result.substring(j+1);
                }
                else
                {
                 result2= result.substring(0, j) ;
                }
                number=Integer.valueOf(result2);
            }
            }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
            Collections.sort(values);
            if(values.isEmpty()){
 System.out.println(0);
            }
            else
                 System.out.println(values.get(values.size()-1));
    }
}
