// Abstract  in Java

import java.lang.*;

abstract class Demo
{
    public int i,j;

    public Demo()
    {
        System.out.println("Demo constructor");
    }

    public void fun()             // Concrete
    {
        System.out.println("Demo fun");
    }

    public abstract void gun();   //Abstract 
}           
class Hello extends Demo
{
    public int x,y;

    public Hello()
    {
        System.out.println("Hello constructors");
    }

    public void sun()           // Concrete
    {
        System.out.println("Hello sun");
    }

    public void gun()           // Concrete
    {
        System.out.println("Hello gun");
    }
}
        


class program36
{
    public static void main(String arg[])
    {
        Demo dobj;
        //dobj = new Demo();

        Hello hobj = new Hello(); // abstract class inherited and 
        hobj.fun();               // defined 
        hobj.gun();
        hobj.sun();
    }
}
