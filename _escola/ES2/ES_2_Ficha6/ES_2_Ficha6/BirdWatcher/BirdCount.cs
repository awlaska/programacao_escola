using System;
using System.Linq;

namespace ES_2_Ficha6.BirdWatcher
{
    public class BirdCount
    {
        private int[] _birdsPerDay;

        public BirdCount(int[] birdsPerDay)
        {
            _birdsPerDay = birdsPerDay;
        }

        public static int[] LastWeek() => new[] { 0, 2, 5, 3, 7, 8, 4 };

        public int Today() => _birdsPerDay.Last();

        public void IncrementTodaysCount()
        {
            _birdsPerDay[^1]++;
        }

        public bool HasDayWithoutBirds() => _birdsPerDay.Contains(0);

        public int CountForFirstDays(int numberOfDays) => _birdsPerDay.Take(numberOfDays).Sum();

        public int BusyDays() => _birdsPerDay.Count(day => day >= 5);
    }
}
