import java.util.*;

class TwoSum {

    private static int[] targetSum(int arr[], int k) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        for (int i = 0; i < arr.length; i++) {
            if (map.containsKey(k - arr[i])) {
                return new int[] { map.get(k - arr[i]), i };
            } else {
                map.put(arr[i], i);
            }
        }
        return new int[2];
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        int k = s.nextInt();
        s.close();
        int[] res = targetSum(arr, k);
        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i]);
        }
    }
}