using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using Microsoft.EntityFrameworkCore;

#nullable disable

namespace Demo.Entities
{
    [Table("users")]
    public partial class User
    {
        public User()
        {
            Meals = new HashSet<Meal>();
        }

        [Key]
        [Column("user_id")]
        public int UserId { get; set; }
        [Required]
        [Column("email")]
        [StringLength(100)]
        public string Email { get; set; }
        [Required]
        [Column("password")]
        [StringLength(100)]
        public string Password { get; set; }
        [Column("name")]
        [StringLength(100)]
        public string Name { get; set; }

        [InverseProperty(nameof(Meal.User))]
        public virtual ICollection<Meal> Meals { get; set; }
    }
}
