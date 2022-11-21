using ES_2_Ficha6.RemoteControlCompetition;
using ES_2_Ficha6.RemoteControlCompetition.Interfaces;
using Xunit;

namespace ES_2_FICHA_6_Tests.RemoteControlCompetition
{
    public class ProductionRemoteControlCarTests
    {
        IRemoteControlCar _productionRemoteControlCar = null;
        public ProductionRemoteControlCarTests()
        {
            _productionRemoteControlCar = new ProductionRemoteControlCar();
        }

        #region DistanceTravelled
        [Fact]
        public void DistanceTravelled_Tens()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            int expectedDistanceTravelled = 10;

            //Act
            _productionRemoteControlCar.Drive();
            int actualDistanceTravelled = _productionRemoteControlCar.DistanceTravelled;

            //Assert
            Assert.Equal(expectedDistanceTravelled, actualDistanceTravelled);
        }
        #endregion
    }
}
