using ES_2_Ficha6.RemoteControlCompetition.Interfaces;

namespace ES_2_Ficha6.RemoteControlCompetition
{
    public class ExperimentalRemoteControlCar : IRemoteControlCar
    {
        public ExperimentalRemoteControlCar() { }

        public int DistanceTravelled { get; private set; }
        public void Drive() =>  DistanceTravelled += 20;
    }
}
