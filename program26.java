/*
0 -35 = fail
35 - 50 = pass class
50 - 60 = second class
60 - 70 = first class
70 - 100 = first class with distinction
*/

import java.util.Scanner;

public class program26
{
    
    public static void main(String arg[])
    {
        Scanner reader = new Scanner(System.in);

        System.out.print("Enter the percent:");
        int percent= reader.nextInt();

        if((percent > 0) && (percent < 35.0))
        {
            System.out.print("You are failed");
        }

        else if((percent > 35.0) && (percent < 50.0))
        {
            System.out.print("pass class");
        }

        else if((percent > 50.0) && (percent < 60.0))
        {
            System.out.print( "second class");
        }

        else if((percent > 60.0) && (percent < 70.0))
        {
            System.out.print("first class");
        }

        else if((percent > 70.0) && (percent < 100.0))
        {
            System.out.print("first class with distinction");
        }
        

        
    }
}