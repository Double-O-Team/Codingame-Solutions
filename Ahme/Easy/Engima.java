import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        ArrayList<String>rotors=new ArrayList<>();
        Scanner in = new Scanner(System.in);
        String operation = in.nextLine();
        int pseudoRandomNumber = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < 3; i++) {
            String rotor = in.nextLine();
            rotors.add(rotor);
        }
        String message = in.nextLine();

        String messg="";
        String postion="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
         if(operation.equals("ENCODE"))
            {
        for(int i=0;i<message.length();i++)
        {
            int num=postion.indexOf(message.charAt(i));
           
             messg+=(char) (((num+pseudoRandomNumber+i)%26)+65);
            }
        
        for(int i=0;i<rotors.size();i++)
        {
            message="";
             for(int j=0;j<messg.length();j++)
        { 
           message+=rotors.get(i).charAt(postion.indexOf(messg.charAt(j)));
        }
       
           messg=message;
        }
            }
          if(operation.equals("DECODE"))
            {
                messg=message;
                    for(int i=rotors.size()-1;i>=0;i--)
                    {
                        message="";
                        for(int j=0;j<messg.length();j++)
                    { 
                    message+=postion.charAt(rotors.get(i).indexOf(messg.charAt(j)));
                    }
                
                    messg=message;
                    }

                    messg="";   
               
                 for(int i=0;i<message.length();i++)
             {
               int num=postion.indexOf(message.charAt(i));
                num=num-pseudoRandomNumber-i;
                if(num>=0){
                    messg+=(char) (((num)%26)+65);
                }else
                {
                    while(num<0)
                    {
                        num=num+26;
                    }
               messg+=(char) (((num))+65);
                }
            } 
            }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(messg);
    }
}
