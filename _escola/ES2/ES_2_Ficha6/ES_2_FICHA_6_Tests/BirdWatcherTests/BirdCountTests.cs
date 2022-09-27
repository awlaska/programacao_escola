using ES_2_Ficha6.BirdWatcher;
using Xunit;

namespace ES_2_FICHA_6_Tests.BirdWatcherTests
{
    public class BirdCountTests
    {
        BirdCount _birdCount = null;
        int[] birdsPerDay = { 2, 5, 0, 7, 4, 1 };

        public BirdCountTests()
        {
            _birdCount = new(birdsPerDay);
        }

        [Fact]
        public void TestToday()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            int expectedToday = 1;

            //Act
            int today = _birdCount.Today();

            //Assert
            Assert.Equal(expectedToday, today);
        }

        [Fact]
        public void TestLastWeek()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            int[] expectedLastWeek = new[] { 0, 2, 5, 3, 7, 8, 4 };

            //Act
            int[] lastWeek = BirdCount.LastWeek();

            //Assert
            Assert.Equal(expectedLastWeek, lastWeek);
        }

        [Fact]
        public void TestHasDayWithoutBirds()
        {
            //A - A -  A
            //Arrange - Act - Assert

            //Arrange
            bool expectedDaysWithoutBirds = true;

            //Act
            bool daysWithoutBirds = _birdCount.HasDayWithoutBirds();

            //Assert
            Assert.Equal(expectedDaysWithoutBirds, daysWithoutBirds);
        }
    }
}
