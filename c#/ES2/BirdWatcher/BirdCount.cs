using System;
using System.Linq;

// Nome da pasta acima
namespace BirdWatcher
{
    // Classe BirdWatcher
    public class BirdWatcher
    {
        // Nova variável _birdsPerDay.
        // Tem _ antes porque é uma variável da classe BirdWatcher
        private int[] _birdsPerDay;
        
        // Método BirdCount que recebe a variável birdsPerDay
        public BirdCount(int[] birdsPerDay)
        {
            _birdsPerDay = birdsPerDay;
        }
        
        // Método LastWeek que tem um array os números de pássaros que passaram na semana anterior
        public static int[] LastWeek() => new[] { 0, 2, 5, 3, 7, 8, 4 };
        
        // Número de passaros de hoje
        public int Today() => _birdsPerDay.Last();

        // Aumentar o número de passaros que passaram hoje
        public void IncrementTodaysCount()
        {
            _birdsPerDay[^1]++;
        }

        // Verifica se existe dia sem passaros (bool)
        public bool HasDayWithoutBirds() => _birdsPerDay.Contains(0);

        // Soma o número de passaros na 1a semana
        public int CountForFirstDays(int numberOfDays) => _birdsPerDay.Take(numberOfDays).Sum();

        // Conta os dias em que passam com mais de 5 passaros
        public int BusyDays() => _birdsPerDay.Count(day => day >= 5);
    }
}