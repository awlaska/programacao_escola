using ES_2_Ficha6.NeedForSpeed;
using Xunit;

namespace ES_2_FICHA_6_Tests.NeedForSpeedTests
{
    public class RemoteControlCarTests
    {

        RemoteControlCar _car = null;
        int _distanceDefault = 20;

        public RemoteControlCarTests()
        {
            _car = new(_distanceDefault, 2);
        }

        #region DistanceDriven
        [Fact]
        public void DistanceDriven_Zero() {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            int expectedDistance = 0;

            //Act
            int distance = _car.DistanceDriven();
            
            //Assert
            Assert.Equal(expectedDistance, distance);
        }

        [Fact]
        public void DistanceDriven_Twenty()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            int exceptedDistance = _distanceDefault;

            //Act
            _car.Drive();
            int distance = _car.DistanceDriven();


            //Assert
            Assert.Equal(exceptedDistance, distance);
        }
        #endregion

        #region IsBatteryDrained
        [Fact]
        public void IsBatteryDrained_False()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            bool expectedIsBatteryDrained = false;

            //Act
            bool IsBatteryDrained = _car.IsBatteryDrained();

            //Assert
            Assert.Equal(expectedIsBatteryDrained, IsBatteryDrained);
        }

        [Fact]
        public void IsBatteryDrained_True()
        {
            //A - A -  A
            //Arrange - Act - Asset

            //Arrange
            bool exceptedIsBatteryDrained = true;

            //Act
            for (int i = 0; i < 50; i++)
            {
                _car.Drive();
            }
            bool IsBatteryDrained = _car.IsBatteryDrained();

            //Assert
            Assert.Equal(exceptedIsBatteryDrained, IsBatteryDrained);
        }
        #endregion

        #region NITRO
        [Fact]
        public void Nitro()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            RemoteControlCar expectedNitro = new RemoteControlCar(50, 4);
            expectedNitro.Drive();

            //Act
            RemoteControlCar  nitro = RemoteControlCar.Nitro();
            nitro.Drive();

            //Assert
            Assert.Equal(expectedNitro.DistanceDriven(), nitro.DistanceDriven());
        }

        #endregion
    }
}
