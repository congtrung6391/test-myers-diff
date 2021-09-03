import java.util.*;

public class Main {

  private static int LIS(List<Integer> a, int i, List<Integer> dp) {
    if (i == 0) return 1;
    if (dp.get(i) != -1) return dp.get(i);

    int length = 1;
    for (int j = i - 1; j >= 0; --j) {
      if (a.get(i) > a.get(j)) {
        length = Math.max(length, LIS(a, j, dp) + 1);
      }
    }

    dp.set(i, length);
    return length;
  }

  public static void main (String[] args) {
    List<Integer> dp;
    List<Integer> a = new ArrayList<Integer>(
      List.of( 2, 5, 12, 3, 10, 6, 8, 14, 4, 11, 7, 15 )
    );

    int n = a.size();
    System.out.print("Length of Longest Increasing Subsequence is: ");
    dp = new ArrayList<Integer>();
    for (int i = 0; i <= n; ++i) {
      dp.add(-1);
    }

    int length = 1;
    for (int i = 0; i < n; ++i) {
      length = Math.max(length, LIS(a, i, dp));
    }

    System.out.println(length);
  }
}