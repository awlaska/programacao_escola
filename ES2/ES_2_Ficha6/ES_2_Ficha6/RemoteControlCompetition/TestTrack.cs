using ES_2_Ficha6.RemoteControlCompetition.Interfaces;
using System.Collections.Generic;

namespace ES_2_Ficha6.RemoteControlCompetition
{
    public static class TestTrack
    {
        public static void Race(IRemoteControlCar car)
        {
            car.Drive();
        }

        public static List<ProductionRemoteControlCar> GetRankedCars(
            ProductionRemoteControlCar prc1,
            ProductionRemoteControlCar prc2)
        {
            List<ProductionRemoteControlCar> list = new() { prc1, prc2 };
            list.Sort();
            return list;
        }
    }
}
