using System.Xml.Schema;

namespace Exercicios;

/*
 You're an avid bird watcher that keeps track of how many birds have visited your garden in the lastseven days.
 You have six tasks, all dealing with the numbers of birds that visited your garden.
 */
public class BirdWatcher {
   /*
       1. Check what the counts were last week
    For comparison purposes, you always keep a copy of last week's counts nearby, which were: 0, 2, 5, 3, 7, 8 and 4.
    Implement the (static) BirdWatcher.LastWeek() method that returns last week's counts:
    > BirdWatcher.LastWeek(); // => [0, 2, 5, 3, 7, 8, 4]
    */
    public static void LastWeek(int[] lastWeek)
    {
       foreach (var x in lastWeek)
       {
          Console.WriteLine(x.ToString());
       }
    }

    /*
        2. Check how many birds visited today
     Implement the BirdWatcher.Today() method to return how many birds visited your garden today. The bird counts are ordered
     by day, with the first element being the count of the oldest day, and the last element being today's count.
     > int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
     > var birdWatcher = new BirdWatcher(birdsPerDay);
     > birdWatcher.Today(); // => 1
     */
    public void Today(int[] birdsPerDay)
    {
       int bird = birdsPerDay.Last();
       Console.WriteLine(bird);
    }

     /*
        3. Increment today's count
     Implement the BirdWatcher.IncrementTodaysCount() method to increment today's count:
     > int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
     > var birdWatcher = new BirdWatcher(birdsPerDay);
     > birdWatcher.IncrementTodaysCount();
     > birdWatcher.Today(); // => 2
     */
     public void IncrementTodaysCount(int[] birdsPerDay)
     {
        int tot = birdsPerDay.Length - 1;
        birdsPerDay[tot]= birdsPerDay[tot] + 1;
     }

     /*
        4. Check if there was a day with no visiting birds
     Implement the BirdWatcher.HasDayWithoutBirds() method that returns true if there was a day at which zero birds visited the
     garden; otherwise, return false:
     > int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
     > var birdWatcher = new BirdWatcher(birdsPerDay);
     > birdWatcher.HasDayWithoutBirds(); // => true
     */
     public bool HasDayWithoutBirds(int[] birdsPerDay)
     {
        foreach (var day in birdsPerDay) {
           if (day == 0) { return true; }
           else { return false; }
        }
        return false;
     }

     
     /*
        5. Calculate the number of visiting birdsfor the first number of days
     Implement the BirdWatcher.CountForFirstDays() method that returns the number of birds that have visited your garden from
     the start of the week, but limit the count to the specified number of days from the start of the week.
     > int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
     > var birdWatcher = new BirdWatcher(birdsPerDay);
     > birdWatcher.CountForFirstDays(4); // => 14
     */
     public int CountForFirstDays(int i, int[] birdsPerDay)
     {
        int sum = 0;
        for (int j = 0; j < i; j++) { sum = sum + birdsPerDay[j]; }
        return sum;
     }

     /*
        6. Calculate the number of busy days
     Some days are busier that others. A busy day is one where five or more birds have visited your garden.
     Implement the BirdWatcher.BusyDays() method to return the number of busy days:
     > int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
     > var birdWatcher = new BirdWatcher(birdsPerDay);
     > birdWatcher.BusyDays(); // => 2
     */

     public void BusyDays(int[] birdsPerDay)
     {
        int tot = 0;
        foreach (int birds in birdsPerDay) {
           if (birds >= 5) {
              tot++;
           }
        }
        Console.WriteLine(tot);
     }
}