namespace ES_2_Ficha6.NeedForSpeed
{
    public  class RemoteControlCar
    {
        private int _speed;
        private int _batteryDrain;
        private int _distance = 0;
        private int _batteryCharge = 100;

        public RemoteControlCar(int speed, int batteryDrain)
        {
            _speed = speed;
            _batteryDrain = batteryDrain;
        }

        public int DistanceDriven() => _distance;

        public bool IsBatteryDrained() => _batteryCharge < _batteryDrain;

        public void Drive()
        {
            if (IsBatteryDrained() is false)
            {
                _distance += _speed;
                _batteryCharge -= _batteryDrain;
            }
        }
        public static RemoteControlCar Nitro() => new RemoteControlCar(50, 4);
    }
}
