namespace Exercicios;

public class BirdWatcher
{
    static int[] lastWeek = {0, 2, 5, 3, 7, 8, 4};

    // 1. Check what the counts were last week
    private static int[] LastWeek()
    {
        foreach (var x in lastWeek)
        {
            Console.WriteLine(x.ToString());
        }
        return lastWeek;
    }
    
    // 2. Check how many birds visited today
    public int BirdCount(int[] birdsPerDay)
    {
        return birdsPerDay[-1];
    }
    
    // Main
    public static void Main()
    {
      LastWeek();
      int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
      var birdCount = new BirdCount(birdsPerDay);
      birdCount.Today();
    }
}