
    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0,k);
        String largest = s.substring(0,k);
        for(int i=0;i+k<=s.length();i++)
        {
            if(s.substring(i,i+k).compareTo(smallest)<0)
            {
                smallest = s.substring(i,i+k);
            }
            else if(s.substring(i,i+k).compareTo(largest)>0)
            {
                largest = s.substring(i,i+k);
            }
        }
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        return smallest + "\n" + largest;
    }

