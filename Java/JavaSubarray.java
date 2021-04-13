import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int no_Of_ele = scan.nextInt();
        int Arr[] = new int[no_Of_ele];
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i] = scan.nextInt();
        }
        int sum,count=0;
        for(int i=0;i<Arr.length;i++)
        {
            sum=0;
            for(int j=i;j<Arr.length;j++)
            {
                sum = sum+Arr[j];
                if(sum<0)
                {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
