import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.lang.reflect.*;


class Singleton
{
    public static String str;
    private static Singleton obj = new Singleton();
    
    private Singleton()
    {
        
    }
    
    public static Singleton getSingleInstance()
    {
        return obj;
    }

}
