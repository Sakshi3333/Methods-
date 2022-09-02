// Final behaviour

import java.lang.*;

class Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }

    public final void gun()
    {
        System.out.println("Base gun");
    }
}

class Derived extends Base
{
    public void fun()  // overriding
    {
        System.out.println("Derived fun");
    }

    /*
     * public void gun() // NA
     * {
     * System.out.println("Derived gun");
     * }
     */
}

class program34
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived();
        dobj.fun();                  //Derived
        dobj.gun();                  // Base
    }
}