using ES_2_Ficha6.RemoteControlCompetition.Interfaces;
using System;

namespace ES_2_Ficha6.RemoteControlCompetition
{
    public class ProductionRemoteControlCar : IRemoteControlCar, IComparable<ProductionRemoteControlCar>
    {
        public int DistanceTravelled { get; private set; }
        public int NumberOfVictories { get; set; }

        public ProductionRemoteControlCar() { }

        public void Drive() => DistanceTravelled += 10;

        public int CompareTo(ProductionRemoteControlCar other)
        {
            if (other is null)
            {
                return 1;
            }
            return NumberOfVictories.CompareTo(other.NumberOfVictories);
        }
    }
}
