//Runtime method Dispatch

import java.lang.*;

class program31
{
    public static void main(String arg[])
    {
        Base bobj = new Base();           // No casting
        Derived dobj = new Derived();     // No Casting

        Base obj = new Derived();           // Upcasting      // Reference
        //Derived obj2 = new Base();        // DownCasting

        obj.fun();
        obj.gun();
        obj.sun();
        //obj.run();
    }
}

class Base
{
    public int i,j;
    public void fun()
    {
        System.out.println("Base fun");
    }
    public void gun()
    {
        System.out.println("Base gun");
    }
    public void sun()
    {
        System.out.println("Base sun");
    }
}

class Derived extends Base
{
    public int x,y;        // redefinition
    public void fun()
    {
        System.out.println("Derived fun"); // overrided
    }
    public void sun()
    {
        System.out.println("Derived sun"); // overrided
    }
    public void run()
    {
        System.out.println("Derived run");
    }
}