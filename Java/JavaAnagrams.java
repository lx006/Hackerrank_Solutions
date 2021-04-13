
    static boolean isAnagram(String a, String b) {
        // Complete the function
        char[] A = a.toLowerCase().toCharArray();
        char[] B = b.toLowerCase().toCharArray();
        java.util.Arrays.sort(A);
        java.util.Arrays.sort(B);
        if(A.length != B.length)
        {
            return false;
        }
        for(int i=0;i<A.length;i++)
        {
            if(A[i]!=B[i])
            {
                return false;
            }
        }
        return true;
    }

