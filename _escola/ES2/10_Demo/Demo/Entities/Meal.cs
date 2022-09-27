using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using Microsoft.EntityFrameworkCore;

#nullable disable

namespace Demo.Entities
{
    [Table("meals")]
    [Index(nameof(MealId), Name = "meals_idmeal_uindex", IsUnique = true)]
    public partial class Meal
    {
        [Key]
        [Column("meal_id")]
        public int MealId { get; set; }
        [Required]
        [Column("name")]
        [StringLength(100)]
        public string Name { get; set; }
        [Column("calories")]
        public int? Calories { get; set; }
        [Column("time", TypeName = "date")]
        public DateTime Time { get; set; }
        [Column("user_id")]
        public int? UserId { get; set; }

        [ForeignKey(nameof(UserId))]
        [InverseProperty("Meals")]
        public virtual User User { get; set; }
    }
}
