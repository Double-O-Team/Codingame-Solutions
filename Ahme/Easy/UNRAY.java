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
        String MESSAGE = in.nextLine();
        String binary="";
        String out="";
        String prev="";
        String result="";
        for(int i=0;i<MESSAGE.length();i++){
            result= Integer.toBinaryString(MESSAGE.charAt(i));
             while(result.length()<7)
        {
            result="0"+result;
        }

        binary+=result;
        }
        
       
         for(int j=0;j<binary.length(); j++)
        {
            if(binary.charAt(j)=='1'&&prev!="1")
            {  
                 if(j==0)
            {
                out+="0 0";
            }
            else{
                out+=" 0 0";
            }
                prev="1";
            }
            else if(binary.charAt(j)=='1'&&prev=="1")
            {
                out+="0";
                prev="1";
            }
             else if(binary.charAt(j)=='0'&&prev!="0")
            {
                 if(j==0)
            {
                out+="00 0";
            }
            else
            {
              out+=" 00 0";

            }
                prev="0";
            }
            
             else if(binary.charAt(j)=='0'&&prev=="0")
            {
                out+="0";
                prev="0";
            }
            

        }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
        System.out.println(out);
    }
}
