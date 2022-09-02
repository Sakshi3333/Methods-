// Methos Overloading

import java.lang.*;

class Demo
{
    public int Add(int i,int j)
    {
        return i+j;
    }
    public int Add(int i, int j, int k)
    {
        return i+j+k;
    }
    public int Add(int i, int j ,int k,int z)
    {
        return i+j+k+z;
    }
}

class program32
{
    public static void main(String arg[])
    {
        Demo obj = new Demo();
        int ret = 0;
        ret = obj.Add(11,10);
        System.out.println(ret);

        ret = obj.Add(10,10,10);
        System.out.println(ret);

        ret = obj.Add(9,1,10,10);
        System.out.println(ret);
    }

}