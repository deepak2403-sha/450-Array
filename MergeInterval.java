import java.util.*;

public class MergeInterval {
    public static void mergeInterval(Interval arr[]) {
        if (arr.length <= 0) {
            System.out.println("Not vaild");
        }
        Stack<Interval> stack = new Stack<>();
        // Arrays.sort(arr, new Comparator<Interval>() {
        // public int compare(Interval i1, Interval i2) {
        // if (i1.start != i2.start)
        // return i1.start - i2.start;
        // return i1.start - i2.start;
        // }
        // });
        Arrays.sort(arr);
        stack.push(arr[0]);
        for (int i = 1; i < arr.length; i++) {
            Interval top = stack.peek();
            if (arr[i].start > top.end) {
                stack.push(arr[i]);
            } else {
                top.end = Math.max(top.end, arr[i].end);
            }
        }
        Stack<Interval> res = new Stack<>();
        while (stack.size() > 0) {
            res.push(stack.pop());
        }

        while (res.size() > 0) {
            Interval p = res.pop();
            System.out.println(p.start + " " + p.end);
        }
    }

    public static void main(String[] args) {
        Interval arr[] = new Interval[4];
        arr[0] = new Interval(1, 3);
        arr[1] = new Interval(2, 6);
        arr[2] = new Interval(8, 10);
        arr[3] = new Interval(15, 18);
        mergeInterval(arr);
    }
}

class Interval implements Comparable<Interval> {
    int start, end;

    Interval(int start, int end) {
        this.start = start;
        this.end = end;
    }

    public int compareTo(Interval other) {
        if (this.start != other.start) {
            return this.start - other.start;
        }

        return this.start - other.start;
    }
}

/*
 * 
 * public static int[][] mergeInterval(int[][] intervals){ if(intervals.length
 * == 0 || intervals == null) return new int[0][0]; List<int[]> list = new
 * ArrayList<int[]>(); int start = int[0][0]; int end = int[0][1]; for(int[] in
 * : intervals){ if(in[0]>end){ end = Ma } } } }
 * 
 */