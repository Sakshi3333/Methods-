// program to check whteher number is divisible by 3 & 5

import java.util.Scanner;

public class program24
{
    
    public static void main(String arg[])
    {
        Scanner reader = new Scanner(System.in);

        System.out.print("Enter the number:");
        int num = reader.nextInt();

        if((num % 3 == 0)&&(num % 5 == 0))
            System.out.println(num + "is divisible by 3 & 5");
        else
            System.out.println(num + "is not divisible by 3 & 5");
    }
}