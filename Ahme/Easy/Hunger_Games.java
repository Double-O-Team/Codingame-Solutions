import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {
    public static class persons
    {
        String name;
        String killer;
        ArrayList<String>victems=new ArrayList<>();
            public persons(String name,String killer,  ArrayList<String>victems)
            {
                this.name=name;
                this.killer=killer;
                this.victems=victems;
            }

    }
    public static void main(String args[]) {
        ArrayList<persons>people=new ArrayList<>();
        Scanner in = new Scanner(System.in);
        int tributes = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < tributes; i++) {
            String playerName = in.nextLine();
            persons p= new persons(playerName, "Winner", new ArrayList<String>());
            people.add(p);
        }
        int turns = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < turns; i++) {
            String info = in.nextLine();
            String []split=info.split(" ");
            //System.out.println(info);
            for(int j=0;j<people.size();j++)
            {
                if(people.get(j).name.equals(split[0]))
                {
                    if(split.length==3){
                         people.get(j).victems.add(split[2]);
                    }
                    else
                    {
                        for(int k=2;k<split.length;k++)
                        {
                         people.get(j).victems.add(split[k].replace(",", ""));   
                        }
                    }
                }
                if(split.length==3){
                    if(people.get(j).name.equals(split[2]))
                {
                        people.get(j).killer=split[0];
                }
                }
                else{
                        for(int k=2;k<split.length;k++)
                        {
                          if(people.get(j).name.equals(split[k].replace(",", "")))
                          {
                        people.get(j).killer=split[0];
                              }   
                        }
                    }
                }
                    
                }
            
         Comparator<persons> c = (s1, s2) -> s1.name.compareTo(s2.name);
         people.sort(c);
          Comparator<String> c1 = (s1, s2) -> s1.compareTo(s2);
        for(int j=0;j<people.size();j++)
            {
                people.get(j).victems.sort(c1);
                 String output="";
                 if(people.get(j).victems.isEmpty())
                 {
                     output="None";
                 }
                 else
                 {
                     
                     for(int i=0;i<people.get(j).victems.size();i++)
                     {
                          output+=people.get(j).victems.get(i);
                          if(i!=people.get(j).victems.size()-1)
                          {
                               output+=", ";
                          }
                     }
                    
                 }
                System.out.println("Name: "+people.get(j).name);
                System.out.println("Killed: "+output);
                System.out.println("Killer: "+people.get(j).killer);
                if(j!=people.size()-1)
                  System.out.println();
            }
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
    }
}
