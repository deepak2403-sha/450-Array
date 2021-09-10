import java.util.Scanner;

class FindDiff {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        String s1 = s.next();
        String s2 = s.next();
        s.close();
        String result = s1 + s2;
        int ans = 0;
        for (char ch : result.toCharArray()) {
            ans = ans ^ (int) ch;
        }
        System.out.println((char) ans);
    }
}

/*
 * 
 * char findDiff(string s, string t){ string res = s+t; int ans = 0; for(int
 * i=0; i<res.length(); i++; ) {
 * 
 * 
 * } }
 * 
 */