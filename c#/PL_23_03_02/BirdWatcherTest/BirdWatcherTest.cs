using Exercicios;

namespace BirdWatcherTest;

public class Tests
{
    int[] lastWeek = {0, 2, 5, 3, 7, 8, 4};
    int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };
    
    [Test]
    public void TestLastWeek() {
        BirdWatcher.LastWeek(lastWeek);
    }

    [Test]
    public void TestBirdCount()
    {
        var birdCount = new BirdWatcher();
        birdCount.Today(birdsPerDay);
    }

    [Test]
    public void TestIncrementTodaysCount()
    {
        var birdWatcher = new BirdWatcher();
        birdWatcher.IncrementTodaysCount(birdsPerDay);
        birdWatcher.Today(birdsPerDay);
    }

    [Test]
    public void TestHasDayWithoutBirds()
    {
        var birdWatcher = new BirdWatcher();
        birdWatcher.HasDayWithoutBirds(birdsPerDay);
    }

    [Test]
    public void TestCountForFirstDays()
    {
        var birdWatcher = new BirdWatcher();
        birdWatcher.CountForFirstDays(4, birdsPerDay);
    }

    [Test]
    public void TestBusyDays()
    {
        var birdWatcher = new BirdWatcher();
        birdWatcher.BusyDays(birdsPerDay);
    }
}