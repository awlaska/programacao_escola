namespace ES_2_Ficha6.NeedForSpeed
{
    public class RaceTrack
    {
        int _distance;

        public RaceTrack(int distance)
        {
            _distance = distance;
        }

        public bool TryFinishTrack(RemoteControlCar car)
        {
            while (!car.IsBatteryDrained())
            {
                car.Drive();
            }
            return car.DistanceDriven() >= _distance;
        }
    }
}
