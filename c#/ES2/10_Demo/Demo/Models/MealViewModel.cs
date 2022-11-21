using System;
using Demo.Entities;

namespace Demo.Models
{
    public class MealViewModel
    { 
        public MealViewModel(Meal meal)
        {
            this.Name = meal.Name;
            this.Calories = meal.Calories ?? 0;
            this.UserName = meal.User.Name;
            this.Time = meal.Time;
        }
        
        public string Name { get; set; }
        public int Calories { get; set; }
        public DateTime Time { get; set; }
        
        public string UserName { get; set; }
    }
}